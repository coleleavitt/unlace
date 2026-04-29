__int64 __fastcall sub_23B30(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, _DWORD *a5, __int64 a6)
{
  int v6; // eax
  int v7; // r12d
  unsigned int v8; // r15d
  int v9; // r13d
  unsigned int v10; // esi
  char v11; // dl
  __int64 result; // rax
  int v15; // [rsp+18h] [rbp-70h] BYREF
  unsigned int v16; // [rsp+1Ch] [rbp-6Ch] BYREF
  _OWORD v17[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v18; // [rsp+40h] [rbp-48h]
  unsigned __int64 v19; // [rsp+48h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  *a4 = 0;
  switch ( (_DWORD)a2 )
  {
    case 0x8000000:
      v6 = 1;
      break;
    case 0x17000000:
      v6 = 2;
      break;
    case 0x4000000:
      v6 = 0;
      break;
    default:
      sub_DA00((__int64)"Invalid token: %u.", a2, a3, (__int64)a4, (__int64)a5, a6, (char)a4);
  }
  v7 = *(_DWORD *)(a1 + 516);
  v8 = 0;
  v9 = v6 | (4 * a3) & 0x3FFFFFC;
  if ( v7 <= 0 )
    return 0;
  while ( 1 )
  {
    if ( (unsigned __int8)sub_22900(a1, &v15, a1 + 512, v8, 2u) )
    {
      if ( v15 == v9 )
      {
        memset(v17, 0, sizeof(v17));
        v18 = 0;
        if ( (unsigned __int8)sub_227B0(a1, a1 + 512, v8, (__int64)v17) )
          break;
      }
    }
    if ( v7 == ++v8 )
      return 0;
  }
  v10 = HIDWORD(v17[0]);
  if ( a5 )
    *a5 = v17[0];
  v11 = sub_232E0(a1, v10, a4, &v16, 0);
  result = 0;
  if ( v11 )
    return v16;
  return result;
}
