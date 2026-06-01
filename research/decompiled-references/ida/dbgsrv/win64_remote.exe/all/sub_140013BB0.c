/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140013BB0
// Address: 0x0000000140013BB0

//----- (0000000140013BB0) ----------------------------------------------------
char __fastcall sub_140013BB0(_QWORD *a1, unsigned __int8 *a2, SIZE_T a3, void *a4, char a5, __int64 a6)
{
  char *v9; // rdx
  __m128i *v11; // rdi
  _BYTE *v12; // rax
  bool v13; // bl
  void *Block; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+38h] [rbp-C8h]
  __int64 v16; // [rsp+40h] [rbp-C0h]
  _BYTE v17[4]; // [rsp+50h] [rbp-B0h] BYREF
  char v18[580]; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v19; // [rsp+298h] [rbp+198h]
  __int8 v20[272]; // [rsp+2B0h] [rbp+1B0h] BYREF
  __m128i Buffer[128]; // [rsp+3C0h] [rbp+2C0h] BYREF

  *a2 = 0;
  if ( a4 && sub_140013EE0((__int64)a1, a4, a5, a2, a3) && sub_14005DC40(a2) )
    return 1;
  if ( qword_1400CAE58 && (unsigned int)qword_1400CAE58(a1[99], a6, Buffer, 1024) )
  {
    Block = nullptr;
    v15 = 0;
    v16 = 0;
    if ( sub_14001C300((__int64)&Block, (const wchar_t *)Buffer) )
    {
      v9 = (char *)Str1;
      if ( v15 )
        v9 = (char *)Block;
LABEL_16:
      sub_1400621E0(a2, v9, a3);
      if ( Block )
      {
        v15 = 0;
        j_free(Block);
      }
      return 1;
    }
    if ( Block )
    {
      v15 = 0;
      j_free(Block);
    }
  }
  if ( qword_1400CAE60 && (unsigned int)qword_1400CAE60(a1[99], a6, Buffer, 1024) )
  {
    Block = nullptr;
    v15 = 0;
    v16 = 0;
    sub_140061D80((__int64)&Block, (unsigned __int16 *)Buffer, -1);
    v9 = (char *)Str1;
    if ( v15 )
      v9 = (char *)Block;
    goto LABEL_16;
  }
  sub_1400142F0((__int64)a1, a6, a2, a3);
  if ( a1[108] )
    v11 = (__m128i *)a1[107];
  else
    v11 = (__m128i *)Str1;
  if ( *a2 && !sub_14005DC40(a2) )
  {
    if ( (GetSystemDirectoryA(Buffer[0].m128i_i8, 0x104u),
          sub_14005DE20(v20, 260, Buffer[0].m128i_i8, a2, 0),
          sub_14005EF30(v20))
      || v11->m128i_i8[0]
      && !sub_14005DC40((unsigned __int8 *)v11)
      && (sub_14005DA20(Buffer, 0x104u, v11), sub_14005DE20(v20, 260, Buffer[0].m128i_i8, a2, 0), sub_14005EF30(v20))
      || GetCurrentDirectoryA(0x104u, Buffer[0].m128i_i8)
      && (sub_14005DE20(v20, 260, Buffer[0].m128i_i8, a2, 0), sub_14005EF30(v20)) )
    {
      sub_1400621E0(a2, v20, a3);
    }
  }
  v19 = -1;
  if ( !(unsigned int)sub_1400635C0((const CHAR *)a2, (__int64)v17, 0) )
  {
    v12 = sub_14005D9D0(a2);
    sub_1400621E0(v12, v18, (__int64)&a2[a3 - (_QWORD)v12]);
  }
  v13 = *a2 != 0;
  sub_140063590((__int64)v17);
  return v13;
}
// 1400CAE58: using guessed type __int64 (__fastcall *qword_1400CAE58)(_QWORD, _QWORD, _QWORD, _QWORD);
// 1400CAE60: using guessed type __int64 (__fastcall *qword_1400CAE60)(_QWORD, _QWORD, _QWORD, _QWORD);
