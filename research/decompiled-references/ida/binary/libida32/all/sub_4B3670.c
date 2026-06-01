__int64 __fastcall sub_4B3670(
        __int64 (__fastcall **a1)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD),
        __m128i *a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned __int64 v6; // rax
  int v7; // r12d
  __int16 v8; // ax
  unsigned int v9; // edx
  __int64 result; // rax
  __int64 (__fastcall **v11[2])(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [rsp+0h] [rbp-58h] BYREF
  __m128i v12; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int8 v13; // [rsp+20h] [rbp-38h]
  unsigned __int64 v14; // [rsp+28h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v6 = sub_3B9AA0((__int64)a1, a3, 0);
  v7 = v6;
  if ( (v6 & 0x400) != 0 && (unsigned __int8)is_off(v6, a4) )
    return sub_4CAB10(a1, a2, a3, a4);
  v11[1] = a1;
  v13 = 0;
  v11[0] = (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))&off_2B02F00;
  v8 = sub_3B9AA0((__int64)a1, a3, 4);
  v9 = a3;
  if ( (v8 & 0x600) == 0x200 )
    v9 = sub_3BD5D0((__int64)a1, a3);
  sub_4B09D0((__int64 *)a1, v11, v9, a4, a3, v7, 1);
  result = v13;
  if ( v13 )
    *a2 = _mm_load_si128(&v12);
  return result;
}

