__int64 __fastcall sub_40BE90(__int64 a1, const __m128i *a2, __int64 a3)
{
  __int64 v3; // rax
  int v5; // r13d
  __int64 v7; // r14
  bool v8; // zf
  int v9; // eax
  _QWORD v10[2]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v11[6]; // [rsp+10h] [rbp-78h] BYREF
  int v12; // [rsp+40h] [rbp-48h]
  unsigned __int64 v13; // [rsp+48h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 8);
  v13 = __readfsqword(0x28u);
  v11[0] = &off_4E99F0;
  v11[1] = 0;
  v11[2] = 0;
  v11[4] = 0;
  v11[5] = v3;
  v12 = 0;
  v11[3] = a3;
  sub_11F760((_BYTE *)a3, v11);
  v5 = v12;
  if ( (unsigned __int8)sub_120560(a3, "_mm_storel_epi64") )
  {
    v7 = *(_QWORD *)(a3 + 72);
    sub_11CA10((char *)(a3 + 32), (char *)(*(_QWORD *)(v7 + 24) + 80LL));
    sub_12B320(a3 + 32, *(_QWORD *)(a1 + 16), *(_QWORD *)(a3 + 24), 8);
    v8 = *(_BYTE *)(a3 + 32) == 4;
    v10[1] = 0;
    v10[0] = 0xFFFFFFFF00000000LL;
    if ( v8 && (*(_BYTE *)(*(_QWORD *)(a3 + 40) + 4LL) & 0x10) != 0 )
      *(_DWORD *)(a3 + 4) |= 0x10u;
    if ( **(_BYTE **)(v7 + 24) == 10 )
    {
      *(_DWORD *)a3 = (*(_DWORD *)(a3 + 4) & 0x10) == 0 ? 4 : 67;
      sub_125180((__int64)v10, *(unsigned __int8 **)(*(_QWORD *)(v7 + 24) + 8LL));
      HIDWORD(v10[0]) = *(_DWORD *)(a3 + 36);
    }
    else
    {
      *(_DWORD *)a3 = 1;
      v9 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 52LL);
      *(_BYTE *)(a3 + 48) = 1;
      *(_DWORD *)(a3 + 52) = 2;
      *(_DWORD *)(a3 + 56) = v9;
      sub_125180((__int64)v10, *(unsigned __int8 **)(v7 + 24));
    }
    sub_11CA10((char *)v10, (char *)(a3 + 64));
    ++v5;
    sub_11CDA0((__int64)v10);
  }
  else
  {
    if ( !a2 )
      return (unsigned int)v5;
    if ( (unsigned __int8)sub_40B780(a1, (__int64)a2, a3)
      || (unsigned __int8)sub_3F5630(a1, a2, a3)
      || (unsigned __int8)sub_3F5A50(a1, (__int64)a2, a3) )
    {
      ++v5;
    }
    else
    {
      v5 += (unsigned __int8)sub_3F5C70(a1, (__int64)a2, a3);
    }
  }
  if ( v5 > 0 && a2 )
    sub_A6830((__int64)a2, a3);
  return (unsigned int)v5;
}
