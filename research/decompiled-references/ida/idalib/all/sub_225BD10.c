__int64 __fastcall sub_225BD10(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 *v4; // rbp
  __int64 *v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v13; // [rsp+10h] [rbp-F8h] BYREF
  __int64 v14; // [rsp+18h] [rbp-F0h]
  __int16 v15; // [rsp+30h] [rbp-D8h]
  _BYTE v16[32]; // [rsp+40h] [rbp-C8h] BYREF
  __int16 v17; // [rsp+60h] [rbp-A8h]
  _BYTE v18[32]; // [rsp+70h] [rbp-98h] BYREF
  __int16 v19; // [rsp+90h] [rbp-78h]
  _BYTE v20[32]; // [rsp+A0h] [rbp-68h] BYREF
  __int16 v21; // [rsp+C0h] [rbp-48h]

  v2 = *(__int64 **)a1;
  v3 = *(unsigned int *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = 0;
  v4 = &v2[v3];
  if ( v2 != v4 )
  {
    v5 = v2;
    do
    {
      v6 = *v5;
      v21 = 257;
      ++v5;
      v19 = 257;
      v17 = 257;
      v7 = *(_QWORD *)(v6 + 16);
      v8 = *(_QWORD *)(v6 + 24);
      v15 = 261;
      v13 = v7;
      v14 = v8;
      sub_228A3B0(a2, &v13, v16, v18, v20);
    }
    while ( v4 != v5 );
  }
  v21 = 257;
  v17 = 257;
  v9 = *(_QWORD *)(a1 + 272);
  v19 = 257;
  v10 = *(_QWORD *)(v9 + 16);
  v11 = *(_QWORD *)(v9 + 24);
  v15 = 261;
  v13 = v10;
  v14 = v11;
  return sub_228A3B0(a2, &v13, v16, v18, v20);
}
