__int64 __fastcall sub_4CA330(_QWORD *a1, __m128i *a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 v6; // rax
  int v7; // r12d
  __int16 v8; // ax
  unsigned __int64 v9; // rdx
  __int64 result; // rax
  __int64 (__fastcall **v11[2])(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [rsp+0h] [rbp-68h] BYREF
  __m128i v12; // [rsp+10h] [rbp-58h] BYREF
  __m128i v13; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int8 v14; // [rsp+30h] [rbp-38h]
  unsigned __int64 v15; // [rsp+38h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v6 = sub_3BE900(a1, a3, 0);
  v7 = v6;
  if ( (v6 & 0x400) != 0 && (unsigned __int8)is_off(v6, a4) )
    return sub_4E21C0(a1, a2, a3, a4);
  v11[1] = (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))a1;
  v14 = 0;
  v11[0] = (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))&off_2B2CEC0;
  v8 = sub_3BE900(a1, a3, 4);
  v9 = a3;
  if ( (v8 & 0x600) == 0x200 )
    v9 = sub_3C2650(a1, a3);
  sub_4C7640((unsigned __int8 **)a1, v11, v9, a4, a3, v7, 1);
  result = v14;
  if ( v14 )
  {
    *a2 = _mm_load_si128(&v12);
    a2[1] = _mm_load_si128(&v13);
  }
  return result;
}
