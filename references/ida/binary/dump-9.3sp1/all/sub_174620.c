__int64 __fastcall sub_174620(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // r15
  __int64 v4; // r13
  __int128 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r14
  unsigned int v9; // r15d
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 *v13; // r14
  _QWORD *v14; // rax
  unsigned __int64 *v15; // rdi
  char v16; // al
  int v17; // edx
  __int64 v18; // rcx
  unsigned int **v19; // r14
  unsigned int *v20; // r15
  __int64 v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // [rsp+8h] [rbp-A8h]
  __int64 v32[2]; // [rsp+10h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+20h] [rbp-90h]
  __int128 v34; // [rsp+28h] [rbp-88h]
  __int64 v35; // [rsp+40h] [rbp-70h] BYREF
  __int128 v36; // [rsp+48h] [rbp-68h]
  __int64 v37; // [rsp+58h] [rbp-58h]
  char v38; // [rsp+60h] [rbp-50h]
  int v39; // [rsp+68h] [rbp-48h]
  int v40; // [rsp+6Ch] [rbp-44h]
  char v41; // [rsp+70h] [rbp-40h]
  unsigned __int64 v42; // [rsp+78h] [rbp-38h]

  v42 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)v1 != 2 )
    return 0;
  *(_BYTE *)(a1 + 48) = 1;
  v3 = v1;
  if ( *(_BYTE *)(v1 + 48) == 4 )
    return 0;
  v4 = v1 + 48;
  *(_QWORD *)&v5 = *(_QWORD *)(a1 + 16);
  *((_QWORD *)&v5 + 1) = v32;
  v32[0] = 0;
  v32[1] = 0;
  v33 = 0;
  v34 = 0;
  sub_123EA0(v5, v1 + 48, 1, 0xFFFF0000);
  v6 = sub_129150(*(_QWORD *)(a1 + 16), v32, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), 0, 0, 0, 0x101u);
  v8 = v6;
  if ( !v6 )
  {
    v11 = *(_QWORD *)(a1 + 16);
    v12 = *(_QWORD *)(v11 + 352);
    if ( !(_DWORD)v12 || (_DWORD)v12 == 1 && !**(_DWORD **)(v11 + 344) )
      goto LABEL_5;
    v13 = *(__int64 **)(a1 + 40);
    if ( v13 )
    {
      v14 = (_QWORD *)v13[1];
      if ( !v14 )
      {
        v28 = *(_QWORD *)(a1 + 8);
        if ( *(int *)(v28 + 312) <= 2 )
          goto LABEL_34;
        v29 = sub_670E0((_QWORD *)v28, (__int64)v32, v11, v7);
        v30 = sub_110340(v29, 0);
        *v13 = v30;
        ++*(_DWORD *)(v30 + 24);
        v14 = (_QWORD *)*v13;
        v13[1] = *v13;
        if ( !v14 )
          goto LABEL_34;
        v11 = *(_QWORD *)(a1 + 16);
      }
      v15 = (unsigned __int64 *)(*v14 + 24LL * *(int *)(v11 + 72));
      v16 = *(_BYTE *)(v3 + 48);
      v17 = *(_DWORD *)(v3 + 52);
      if ( v16 == 1 )
      {
        v18 = *(int *)(v3 + 56);
      }
      else if ( v16 == 5 )
      {
        v18 = *(_QWORD *)(*(_QWORD *)(v3 + 56) + 8LL);
      }
      else
      {
        v16 = 0;
        v18 = -1;
      }
      v35 = 0;
      v37 = v18;
      v38 = v16;
      v39 = v17;
      v40 = -1;
      v41 = 1;
      v36 = 0;
      v19 = (unsigned int **)sub_104DF0(v15, (__int64)&v35);
      if ( v35 )
      {
        *(_QWORD *)&v36 = 0;
        qfree(v35);
      }
      if ( !v19 )
        goto LABEL_5;
      v20 = *v19;
      v21 = (__int64)&(*v19)[(_QWORD)v19[1]];
      if ( (unsigned int *)v21 == v20 )
        goto LABEL_5;
      while ( 1 )
      {
        v22 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 64LL);
        v23 = *v20;
        if ( (unsigned int)v23 >= *(_DWORD *)(v22 + 64) )
          sub_1733C0();
        v24 = *(_QWORD *)(*(_QWORD *)(v22 + 528) + 8 * v23);
        v25 = sub_129150(v24, v32, *(_QWORD *)(v24 + 56), 0, 0, 0, 0x101u);
        v31 = v25;
        if ( v25 )
        {
          if ( sub_125B60((unsigned __int8 *)(v25 + 64), v4, 0)
            && (*(_DWORD *)v31 == 4 || *(_DWORD *)v31 == 67 && *(_DWORD *)(v31 + 36) == *(_DWORD *)(v31 + 68))
            && *(_BYTE *)(v31 + 32) == 10 )
          {
            v26 = *(_QWORD *)(v31 + 40);
            if ( *(_BYTE *)v26 == 6 )
            {
              if ( (unsigned __int8)sub_342B40(
                                      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 480LL),
                                      *(_QWORD *)(v26 + 8),
                                      *(int *)(v31 + 36)) )
                break;
            }
          }
        }
        if ( (unsigned int *)v21 == ++v20 )
          goto LABEL_5;
      }
      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL) |= 0x20000u;
    }
LABEL_34:
    v9 = 1;
    goto LABEL_6;
  }
  if ( sub_125B60((unsigned __int8 *)(v6 + 64), v4, 0) )
  {
    if ( *(_DWORD *)v8 != 4 )
    {
      if ( *(_DWORD *)v8 != 67 )
        goto LABEL_5;
      v9 = 0;
      if ( *(_DWORD *)(v8 + 36) != *(_DWORD *)(v8 + 68) )
        goto LABEL_6;
    }
    if ( *(_BYTE *)(v8 + 32) == 10 )
    {
      v27 = *(_QWORD *)(v8 + 40);
      if ( *(_BYTE *)v27 == 6 )
      {
        if ( (unsigned __int8)sub_342B40(
                                *(_QWORD *)(*(_QWORD *)(a1 + 16) + 480LL),
                                *(_QWORD *)(v27 + 8),
                                *(int *)(v8 + 36)) )
        {
          v9 = 1;
          *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL) |= 0x20000u;
          goto LABEL_6;
        }
      }
    }
  }
LABEL_5:
  v9 = 0;
LABEL_6:
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(v33);
  }
  qfree(v32[0]);
  return v9;
}
