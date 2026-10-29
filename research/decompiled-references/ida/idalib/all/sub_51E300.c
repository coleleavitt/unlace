unsigned __int64 __fastcall sub_51E300(__int64 *a1)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // edx
  int v7; // ebp
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  __int64 *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // [rsp+0h] [rbp-B8h] BYREF
  __int128 v19; // [rsp+8h] [rbp-B0h]
  __int128 v20; // [rsp+18h] [rbp-A0h]
  __int128 v21; // [rsp+28h] [rbp-90h]
  int v22; // [rsp+38h] [rbp-80h]
  __int64 v23; // [rsp+40h] [rbp-78h] BYREF
  __int128 v24; // [rsp+48h] [rbp-70h]
  __int128 v25; // [rsp+58h] [rbp-60h]
  __int128 v26; // [rsp+68h] [rbp-50h]
  int v27; // [rsp+78h] [rbp-40h]
  unsigned __int64 v28; // [rsp+88h] [rbp-30h]

  v28 = __readfsqword(0x28u);
  if ( !*((_BYTE *)a1 + 136) )
  {
    *((_BYTE *)a1 + 136) = 1;
    netnode_check(&v23, "$ srareas", 0, 0);
    v3 = *a1;
    a1[6] = v23;
    if ( !(unsigned __int8)sub_7BE6E0(v3, a1 + 6) )
    {
      netnode_check(&v23, "$ regs", 0, 0);
      a1[7] = v23;
      if ( !(unsigned __int8)netnode_check(a1 + 6, "$ srareas", 0, 1) )
        sub_387C60(1338);
    }
    v4 = a1[3];
    if ( v4 )
    {
      if ( !under_debugger )
        interr(1174);
      BUG();
    }
    v5 = a1[1];
    v6 = *(_DWORD *)(v5 + 68);
    *((_DWORD *)a1 + 10) = v6;
    v7 = *(_DWORD *)(v5 + 72);
    *((_DWORD *)a1 + 11) = v7;
    v8 = v7 + 1 - v6;
    if ( v8 )
    {
      v9 = a1[2];
      v10 = a1[4];
      v11 = a1 + 2;
      v18 = 0;
      v22 = 0;
      v19 = 0;
      v21 = 0;
      v20 = 0;
      if ( (unsigned __int64)&v18 < v9 || (unsigned __int64)&v18 >= v9 + (v10 << 6) )
      {
        if ( v10 >= v8 || (v16 = qvector_reserve(v11, v9, v8, 64), a1[2] = v16, v9 = v16, v4 = a1[3], v4 < v8) )
        {
          while ( 1 )
          {
            v12 = v4++;
            v13 = (v12 << 6) + v9;
            *(_QWORD *)v13 = 0;
            *(_DWORD *)(v13 + 56) = 0;
            *(_OWORD *)(v13 + 8) = 0;
            *(_OWORD *)(v13 + 24) = 0;
            *(_OWORD *)(v13 + 40) = 0;
            if ( v8 == v4 )
              break;
            v9 = a1[2];
          }
        }
      }
      else
      {
        v23 = 0;
        v27 = 0;
        v24 = 0;
        v25 = 0;
        v26 = 0;
        if ( v10 >= v8 || (v17 = qvector_reserve(v11, v9, v8, 64), a1[2] = v17, v9 = v17, v4 = a1[3], v4 < v8) )
        {
          while ( 1 )
          {
            v14 = v4++;
            v15 = (v14 << 6) + v9;
            *(_QWORD *)v15 = 0;
            *(_DWORD *)(v15 + 56) = 0;
            *(_OWORD *)(v15 + 8) = 0;
            *(_OWORD *)(v15 + 24) = 0;
            *(_OWORD *)(v15 + 40) = 0;
            if ( v8 == v4 )
              break;
            v9 = a1[2];
          }
        }
      }
      a1[3] = v8;
    }
  }
  return v28 - __readfsqword(0x28u);
}
