unsigned __int64 __fastcall sub_3DF5C0(__int64 a1, __int64 a2, __int64 *a3, unsigned int a4)
{
  _QWORD *v7; // rax
  unsigned int v9; // r13d
  _QWORD *v10; // rdi
  char v11; // al
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // r15
  unsigned int v15; // eax
  __int64 v16; // rdi
  char v17; // al
  _QWORD *v18; // rdi
  __int64 v20; // rax
  unsigned int v21; // eax
  __int64 v22; // r10
  __int64 *v23; // rbx
  __int64 v24; // r14
  __int64 v25; // r15
  __int64 v26; // r12
  unsigned int *v27; // rbp
  unsigned int v28; // esi
  unsigned int v29; // eax
  unsigned int v30; // [rsp+Ch] [rbp-8Ch]
  __int64 v31; // [rsp+10h] [rbp-88h]
  _QWORD *v32; // [rsp+18h] [rbp-80h]
  __int64 v33; // [rsp+28h] [rbp-70h]
  unsigned int v34; // [rsp+30h] [rbp-68h]
  unsigned int v35; // [rsp+34h] [rbp-64h]
  __int64 v36; // [rsp+38h] [rbp-60h]
  __int64 v37; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v38; // [rsp+50h] [rbp-48h] BYREF
  char v39; // [rsp+54h] [rbp-44h]
  unsigned __int64 v40; // [rsp+58h] [rbp-40h]

  v7 = *(_QWORD **)(a2 + 1480);
  v40 = __readfsqword(0x28u);
  v38 = -1;
  v39 = 0;
  v37 = 0;
  v32 = v7;
  sub_6141A0(*v7, 26, &v37, 8);
  v9 = v37;
  v30 = HIDWORD(v37);
  v10 = *(_QWORD **)(a2 + 1480);
  if ( *(_BYTE *)(a1 + 72) == 100 )
    v11 = sub_3FC530(v10, &v38);
  else
    v11 = sub_3DC190(v10, (__int64)&v38, a4);
  while ( v11 )
  {
    while ( 1 )
    {
      v12 = a3[1];
      v13 = *a3;
      if ( a3[2] < (unsigned __int64)(v12 + 1) )
      {
        v20 = qvector_reserve(a3, v13, v12 + 1, 12);
        v12 = a3[1];
        *a3 = v20;
        v13 = v20;
      }
      v14 = v13 + 12 * v12;
      *(_DWORD *)v14 = -1;
      *(_BYTE *)(v14 + 4) = 0;
      v15 = v38;
      *(_BYTE *)(v14 + 8) = 1;
      ++a3[1];
      *(_DWORD *)v14 = v15;
      v16 = v38;
      *(_BYTE *)(v14 + 4) = v39;
      v17 = (unsigned int)v16 >= v9 && (unsigned int)v16 < v30;
      if ( !v17 )
      {
        v17 = is_mapped(v16);
        if ( v17 )
          v17 = (get_flags_ex(v38, 4) & 0x1000) != 0;
      }
      *(_BYTE *)(v14 + 8) = v17;
      v18 = *(_QWORD **)(a2 + 1480);
      if ( *(_BYTE *)(a1 + 72) == 100 )
        break;
      if ( !(unsigned __int8)sub_3DC350(v18, &v38, a4) )
        goto LABEL_11;
    }
    v11 = sub_3FD4E0(v18, &v38, a4);
  }
LABEL_11:
  if ( *(_BYTE *)(a1 + 72) == 100 )
  {
    v21 = sub_3B90A0(v32, a4);
    v22 = a3[1];
    if ( v22 )
    {
      v33 = a1;
      v23 = a3;
      v24 = a3[1];
      v34 = v21;
      v25 = 12 * v22;
      v36 = a2;
      v35 = a4;
      do
      {
        v26 = *v23;
        v31 = v25;
        v25 -= 12;
        v27 = (unsigned int *)(*v23 + v25);
        v28 = *v27;
        LODWORD(v37) = v28;
        if ( v28 >= v9 && v28 < v30 )
        {
          v29 = sub_3B90A0(v32, v28);
          if ( !(unsigned __int8)netnode_charval(v29, v34, 68)
            || (unsigned int)sub_41A0E0(*(_QWORD *)(v36 + 1480), (unsigned int)v37) == 7 )
          {
            if ( (unsigned __int8)sub_47DA00(*(_QWORD *)(v33 + 32), &v37, *(unsigned int *)(v33 + 12)) )
            {
              sub_3FEAD0(v32, v35, *v27, 1);
              sub_3FDEE0((_DWORD)v32);
              *v27 = v37;
            }
            else
            {
              memmove((void *)(v26 + v25), (const void *)(v26 + v31), *v23 + 12 * v23[1]-- - (_QWORD)v27 - 12);
            }
          }
        }
        --v24;
      }
      while ( v24 );
    }
  }
  return v40 - __readfsqword(0x28u);
}

