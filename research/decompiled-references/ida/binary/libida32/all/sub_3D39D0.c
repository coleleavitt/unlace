unsigned __int64 __fastcall sub_3D39D0(_QWORD **a1, unsigned int a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rax
  int v6; // r12d
  int v8; // r12d
  int v9; // ebp
  __int64 v11; // r13
  unsigned __int64 v12; // r8
  char v13; // al
  __int64 v14; // r8
  char *v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rsi
  __int64 v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rsi
  __int64 v21; // rax
  unsigned __int64 v22; // [rsp+8h] [rbp-60h]
  unsigned __int64 v23; // [rsp+8h] [rbp-60h]
  _BYTE v24[2]; // [rsp+10h] [rbp-58h] BYREF
  _WORD v25[8]; // [rsp+12h] [rbp-56h] BYREF
  char v26; // [rsp+22h] [rbp-46h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-40h]

  v5 = *a1;
  v6 = *((_DWORD *)a1 + 56);
  v27 = __readfsqword(0x28u);
  v8 = v6 & 0x4000000;
  v9 = sub_3E26B0(*v5);
  if ( v9 || !v8 )
  {
    v11 = (unsigned int)node2ea(a2);
    if ( sub_3B8910((__int64)*a1, v11) )
    {
      v12 = sub_3B9AA0((__int64)*a1, v11, 0);
      if ( (v12 & 0x600) == 0x400 && (v12 & 0xF0000000) == 0xD0000000
        || (v22 = v12, v13 = is_custfmt(v12, 15), v12 = v22, v13) )
      {
        v23 = v12;
        sub_3E3300(v24, a3, a4);
        v14 = v23;
        if ( v9 )
        {
          v15 = (char *)v25;
          while ( *(_WORD *)v15 )
          {
            v15 += 2;
            if ( &v26 == v15 )
              goto LABEL_11;
          }
          v19 = a1[10];
          v20 = a1[9];
          if ( a1[11] < (_QWORD *)((char *)v19 + 1) )
          {
            v21 = qvector_reserve(a1 + 9, v20, (char *)v19 + 1, 4);
            v14 = v23;
            a1[9] = (_QWORD *)v21;
            v20 = (_QWORD *)v21;
            v19 = a1[10];
          }
          *((_DWORD *)v20 + (_QWORD)v19) = v11;
          a1[10] = (_QWORD *)((char *)a1[10] + 1);
        }
LABEL_11:
        if ( !v8 )
        {
          if ( v25[0] > 0 )
            v14 |= 0xD00000uLL;
          if ( v25[1] > 0 )
            v14 |= 0xD000000uLL;
          sub_3CAE70(*a1, v11, v14);
        }
      }
    }
    else
    {
      v16 = a1[13];
      v17 = a1[12];
      if ( a1[14] < (_QWORD *)((char *)v16 + 1) )
      {
        v18 = qvector_reserve(a1 + 12, v17, (char *)v16 + 1, 4);
        a1[12] = (_QWORD *)v18;
        v17 = (_QWORD *)v18;
        v16 = a1[13];
      }
      *((_DWORD *)v17 + (_QWORD)v16) = v11;
      a1[13] = (_QWORD *)((char *)a1[13] + 1);
    }
  }
  return v27 - __readfsqword(0x28u);
}

