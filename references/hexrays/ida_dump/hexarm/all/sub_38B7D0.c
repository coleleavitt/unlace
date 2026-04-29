unsigned __int64 __fastcall sub_38B7D0(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  int v4; // eax
  __int64 v7; // rdi
  __int64 v9; // rdx
  int v10; // r10d
  const char *v12; // rsi
  bool v13; // sf
  bool v14; // of
  unsigned __int64 *v15; // rdi
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // r13
  __int64 v18; // rax
  unsigned __int64 *v19; // rax
  __int64 v20; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int64 v21; // [rsp+8h] [rbp-80h]
  __int64 v22; // [rsp+10h] [rbp-78h]
  __int64 v23; // [rsp+18h] [rbp-70h]
  int v24; // [rsp+20h] [rbp-68h] BYREF
  _QWORD *v25; // [rsp+28h] [rbp-60h]
  int v26; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v27; // [rsp+48h] [rbp-40h]
  unsigned __int64 v28; // [rsp+58h] [rbp-30h]

  v28 = __readfsqword(0x28u);
  v4 = *(_DWORD *)(*(_QWORD *)(a2 + 40) + 12LL);
  if ( v4 >= 0 )
  {
    v7 = *(_QWORD *)(a3 + 32);
    if ( (unsigned __int64)(unsigned int)v4 < *(_QWORD *)(v7 + 136) )
    {
      v9 = *(_QWORD *)(v7 + 128) + 32LL * (unsigned int)v4;
      v10 = *(__int16 *)(a2 + 28);
      v12 = s1;
      if ( *(_QWORD *)(v9 + 8) )
        v12 = *(const char **)v9;
      v14 = __OFSUB__(v4, *(_DWORD *)(v7 + 152));
      v13 = v4 - *(_DWORD *)(v7 + 152) < 0;
      LODWORD(v20) = 0;
      v24 = 0;
      v26 = 0;
      sub_38ACD0(v7, v12, v10, v13 == v14, &v20, (__int64)&v24, a4, (__int64)&v26);
      v15 = *(unsigned __int64 **)(a3 + 32);
      v16 = *v15;
      if ( v24 == 1 )
      {
        v19 = sub_2576B0((__int64)v15, v25);
        if ( v19 )
          v16 = *v19;
      }
      else if ( v26 == 4 )
      {
        v16 = v27;
      }
      else if ( (_DWORD)v20 == 4 )
      {
        v16 = v21;
      }
      v17 = sub_3312A0(*(_QWORD **)(a3 + 24), v16);
      if ( v17 != -1
        || (v18 = callui(56, a1, 0, 0, 0, &callui, v20, v21, v22, v23)) != 0 && (v17 = *(_QWORD *)(v18 + 24), v17 != -1) )
      {
        if ( (unsigned __int8)sub_38A0C0(a3, v17) )
          *(_QWORD *)(*(_QWORD *)(a2 + 40) + 24LL) = v17;
      }
    }
  }
  return v28 - __readfsqword(0x28u);
}
