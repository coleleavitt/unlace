unsigned __int64 __fastcall sub_3B9F50(_QWORD *a1, _QWORD *a2)
{
  void **v4; // rsi
  _QWORD *v5; // rdi
  int v6; // eax
  __int64 v7; // rdx
  int v8; // r13d
  int v9; // r12d
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rbx
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  char v17; // al
  __int64 v18; // rsi
  void *v20[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v21; // [rsp+10h] [rbp-48h]
  unsigned __int64 v22; // [rsp+18h] [rbp-40h]
  int v23; // [rsp+20h] [rbp-38h]
  int v24; // [rsp+28h] [rbp-30h]
  __int64 v25; // [rsp+30h] [rbp-28h]
  int v26; // [rsp+38h] [rbp-20h]
  int v27; // [rsp+40h] [rbp-18h]
  int v28; // [rsp+48h] [rbp-10h]
  __int64 v29; // [rsp+50h] [rbp-8h]

  v22 = __readfsqword(0x28u);
  v4 = (void **)a2[1];
  v5 = a2;
  v6 = unpack_dd(a2);
  if ( v6 > 0 )
  {
    v8 = v6;
    v9 = 0;
    v10 = 0;
    do
    {
      *(_OWORD *)v20 = 0;
      v17 = is_cvt64(v5, v4, v7);
      v18 = a2[1];
      if ( v17 )
      {
        v12 = (unsigned int)unpack_dd(a2) + (unsigned int)v10;
        if ( (unsigned int)v12 == 0xFFFFFFFFLL )
          v12 = -1;
      }
      else
      {
        v12 = unpack_dq(a2) + v10;
      }
      v20[0] = (void *)v12;
      if ( (unsigned __int8)is_cvt64(a2, v18, v11) )
      {
        v10 = (unsigned int)unpack_dd(a2) + (unsigned int)v12;
        if ( (unsigned int)v10 == 0xFFFFFFFFLL )
          v10 = -1;
      }
      else
      {
        v10 = unpack_dq(a2) + v12;
      }
      v20[1] = (void *)v10;
      if ( v20[0] >= (void *)v10 )
      {
        sub_84F5B0(
          "bad sparse range (%a, %a) has been ignored\n",
          (__int64)v20[0],
          (int)v20[1],
          v21,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29);
        if ( *a2 >= a2[1] )
          break;
      }
      v4 = v20;
      v5 = a1;
      ++v9;
      rangeset_t_add((int)a1, (int)v20, v13, v14, v15, v16, (int)v20[0], v20[1], v21, v22, v23, v24, v25);
    }
    while ( v8 != v9 );
  }
  return v22 - __readfsqword(0x28u);
}
