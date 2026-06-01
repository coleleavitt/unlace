__int64 __fastcall ZSTD_decompressStream_simpleArgs(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 result; // rax
  _QWORD v11[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v12; // [rsp+10h] [rbp-48h]
  _QWORD v13[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+30h] [rbp-28h]
  unsigned __int64 v15; // [rsp+38h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  v8 = *a4;
  v11[0] = a2;
  v11[1] = a3;
  v12 = v8;
  v9 = *a7;
  v13[0] = a5;
  v13[1] = a6;
  v14 = v9;
  result = ZSTD_decompressStream(a1, v11, v13);
  *a4 = v12;
  *a7 = v14;
  return result;
}

