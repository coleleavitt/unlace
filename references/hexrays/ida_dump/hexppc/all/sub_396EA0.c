__int64 __fastcall sub_396EA0(__int64 a1, int a2, double a3)
{
  __int64 v3; // rbp
  __int16 v4; // bx
  __int64 module_data; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r12
  int v10; // r14d
  unsigned int v11; // esi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // [rsp+8h] [rbp-60h]
  __int64 v19; // [rsp+10h] [rbp-58h] BYREF
  int v20; // [rsp+18h] [rbp-50h]
  __m128i v21; // [rsp+20h] [rbp-48h]
  __int64 v22; // [rsp+30h] [rbp-38h]
  unsigned __int64 v23; // [rsp+38h] [rbp-30h]

  v3 = a1;
  v23 = __readfsqword(0x28u);
  v4 = a2;
  module_data = get_module_data((unsigned int)dword_4DC8D8);
  v9 = module_data;
  if ( a2 == -1 )
  {
    if ( a1 != -1 )
    {
      if ( sub_385AC0(module_data) )
      {
        v4 = 2;
        goto LABEL_5;
      }
      goto LABEL_12;
    }
    v4 = 2;
  }
  else
  {
    v10 = a2 & 7;
    if ( a1 != -1 )
    {
LABEL_3:
      if ( v10 == 2 )
      {
        if ( sub_385AC0(v9) )
          goto LABEL_5;
        LOBYTE(v4) = v4 & 0xF8 | 1;
      }
      else if ( v10 != 1 )
      {
LABEL_5:
        v11 = (32 * v4) & 0x100 | 5;
LABEL_6:
        v20 = 0;
        v19 = 0xFFFFFFFFLL;
        v22 = -1;
        v21 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v3, (__m128i)(unsigned __int64)v3);
        return sub_390760((__int64)&v19, v11, 0, 0);
      }
      v11 = 265;
      if ( (v4 & 8) != 0 )
        goto LABEL_6;
LABEL_12:
      v11 = 9;
      goto LABEL_6;
    }
    if ( (a2 & 7) == 0 )
    {
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(11, &v19, &callui, v6, v7, v8);
      v3 = v19;
      goto LABEL_5;
    }
  }
  v13 = sub_385AC0(module_data);
  if ( !v13 )
  {
    v10 = v4 & 7;
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(11, &v19, &callui, v15, v16, v17);
    v3 = v19;
    goto LABEL_3;
  }
  v18 = v13;
  sub_391910(v13, 0, a3, v14, v15, v16);
  return v18;
}
