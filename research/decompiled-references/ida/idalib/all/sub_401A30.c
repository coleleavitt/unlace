__int64 __fastcall sub_401A30(unsigned __int64 *a1, int a2)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v5; // rsi
  __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v13; // [rsp+0h] [rbp-98h] BYREF
  __int128 v14; // [rsp+8h] [rbp-90h]
  __int64 v15; // [rsp+18h] [rbp-80h]
  __int128 v16; // [rsp+20h] [rbp-78h]
  int v17; // [rsp+30h] [rbp-68h]
  __int64 v18; // [rsp+40h] [rbp-58h]
  __int128 v19; // [rsp+48h] [rbp-50h]
  __int64 v20; // [rsp+58h] [rbp-40h]
  __int128 v21; // [rsp+60h] [rbp-38h]
  int v22; // [rsp+70h] [rbp-28h]
  unsigned __int64 v23; // [rsp+78h] [rbp-20h]

  v3 = a1[1];
  v23 = __readfsqword(0x28u);
  v5 = *a1;
  if ( !v3 || (v6 = v5 + 56 * v3 - 56, *(_DWORD *)(v6 + 48) != a2) )
  {
    v17 = a2;
    v7 = a1[2];
    v8 = v3 + 1;
    v13 = 0;
    v15 = 0;
    v14 = 0;
    v16 = 0;
    if ( (unsigned __int64)&v13 < v5 || (unsigned __int64)&v13 >= v5 + 56 * v7 )
    {
      if ( v7 >= v8 )
        goto LABEL_7;
    }
    else
    {
      v18 = 0;
      v20 = 0;
      v22 = a2;
      v19 = 0;
      v21 = 0;
      if ( v7 >= v8 )
      {
LABEL_7:
        v10 = v5 + 56 * v3;
        *(_QWORD *)v10 = 0;
        *(_QWORD *)(v10 + 24) = 0;
        *(_DWORD *)(v10 + 48) = a2;
        *(_OWORD *)(v10 + 8) = 0;
        *(_OWORD *)(v10 + 32) = 0;
        v11 = a1[1] + 1;
        a1[1] = v11;
        return *a1 + 56 * v11 - 56;
      }
    }
    v9 = qvector_reserve(a1, v5, v3 + 1, 56);
    *a1 = v9;
    v5 = v9;
    v3 = a1[1];
    goto LABEL_7;
  }
  return v6;
}
