_QWORD *__fastcall sub_21C5E70(_QWORD *a1, int a2, _QWORD *a3)
{
  void **v4; // rax
  __int64 v6; // rax
  void *v7[2]; // [rsp+0h] [rbp-98h] BYREF
  _BYTE v8[16]; // [rsp+10h] [rbp-88h] BYREF
  __int64 (__fastcall **v9)(); // [rsp+20h] [rbp-78h] BYREF
  int v10; // [rsp+28h] [rbp-70h]
  __int128 v11; // [rsp+30h] [rbp-68h]
  __int64 v12; // [rsp+40h] [rbp-58h]
  char v13; // [rsp+48h] [rbp-50h]
  int v14; // [rsp+4Ch] [rbp-4Ch]
  void **v15; // [rsp+50h] [rbp-48h]

  v8[0] = 0;
  v7[1] = nullptr;
  v7[0] = v8;
  v10 = 0;
  v13 = 0;
  v14 = 1;
  v12 = 0;
  v11 = 0;
  v9 = &off_2BEBE68;
  v15 = v7;
  sub_227B8B0(&v9, 0, 0, 0);
  switch ( a2 )
  {
    case 0:
      sub_995540((__int64)&v9, "success");
      break;
    case 1:
      sub_995540((__int64)&v9, "end of File");
      break;
    case 2:
      sub_995540((__int64)&v9, "unrecognized instrumentation profile encoding format");
      break;
    case 3:
      sub_995540((__int64)&v9, "invalid instrumentation profile data (bad magic)");
      break;
    case 4:
      sub_995540((__int64)&v9, "invalid instrumentation profile data (file header is corrupt)");
      break;
    case 5:
      sub_995540((__int64)&v9, "unsupported instrumentation profile format version");
      break;
    case 6:
      sub_995540((__int64)&v9, "unsupported instrumentation profile hash type");
      break;
    case 7:
      sub_995540((__int64)&v9, "too much profile data");
      break;
    case 8:
      sub_995540((__int64)&v9, "truncated profile data");
      break;
    case 9:
      sub_995540((__int64)&v9, "malformed instrumentation profile data");
      break;
    case 10:
      sub_995540((__int64)&v9, "debug info/binary for correlation is required");
      break;
    case 11:
      sub_995540((__int64)&v9, "debug info/binary for correlation is not necessary");
      break;
    case 12:
      sub_995540((__int64)&v9, "unable to correlate profile");
      break;
    case 13:
      sub_995540((__int64)&v9, "no profile data available for function");
      break;
    case 14:
      sub_995540(
        (__int64)&v9,
        "invalid profile created. Please file a bug at: https://github.com/llvm/llvm-project/issues/ and include the prof"
        "raw files that caused this error.");
      break;
    case 15:
      sub_995540((__int64)&v9, "function control flow change detected (hash mismatch)");
      break;
    case 16:
      sub_995540((__int64)&v9, "function basic block count change detected (counter mismatch)");
      break;
    case 17:
      sub_995540((__int64)&v9, "function bitmap size change detected (bitmap size mismatch)");
      break;
    case 18:
      sub_995540((__int64)&v9, "counter overflow");
      break;
    case 19:
      sub_995540((__int64)&v9, "function value site count change detected (counter mismatch)");
      break;
    case 20:
      sub_995540((__int64)&v9, "failed to compress data (zlib)");
      break;
    case 21:
      sub_995540((__int64)&v9, "failed to uncompress data (zlib)");
      break;
    case 22:
      sub_995540((__int64)&v9, "empty raw profile file");
      break;
    case 23:
      sub_995540((__int64)&v9, "profile uses zlib compression but the profile reader was built without zlib support");
      break;
    case 24:
      sub_995540((__int64)&v9, "raw profile version mismatch");
      break;
    case 25:
      sub_995540((__int64)&v9, "excessively large counter value suggests corrupted profile data");
      break;
    default:
      break;
  }
  if ( a3[1] )
  {
    v6 = sub_995540((__int64)&v9, ": ");
    sub_227BF10(v6, *a3, a3[1]);
  }
  v4 = v15;
  *a1 = a1 + 2;
  sub_21C5B30(a1, *v4, (__int64)v4[1] + (_QWORD)*v4);
  v9 = &off_2BEBE68;
  sub_227B7A0(&v9);
  if ( v7[0] != v8 )
    operator delete(v7[0]);
  return a1;
}
