unsigned __int64 __fastcall sub_910580(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  _BOOL4 v4; // ecx
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  _DWORD v10[3]; // [rsp+0h] [rbp-58h] BYREF
  _BYTE v11[20]; // [rsp+Ch] [rbp-4Ch]
  __int64 v12; // [rsp+20h] [rbp-38h]
  _BYTE v13[20]; // [rsp+28h] [rbp-30h]
  int v14; // [rsp+3Ch] [rbp-1Ch]
  unsigned __int64 v15; // [rsp+48h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 3736);
  v15 = __readfsqword(0x28u);
  if ( v3 && &ZSTD_trace_compress_end )
  {
    v4 = 1;
    if ( !*(_QWORD *)(a1 + 3544) && !*(_QWORD *)(a1 + 3584) )
      v4 = *(_DWORD *)(a1 + 308) > 0;
    v5 = *(_DWORD *)(a1 + 664);
    v10[0] = 10506;
    *(_OWORD *)v11 = 0;
    v10[2] = v5;
    v6 = *(_QWORD *)(a1 + 672);
    v14 = 0;
    *(_QWORD *)&v11[4] = v6;
    v7 = *(_QWORD *)(a1 + 768);
    *(_OWORD *)&v13[4] = 0;
    *(_QWORD *)&v11[12] = v7;
    v8 = *(_QWORD *)(a1 + 776);
    v10[1] = v4;
    *(_QWORD *)&v13[8] = a1;
    v12 = a2 + v8;
    *(_QWORD *)v13 = a1 + 232;
    ((void (__fastcall *)(__int64, _DWORD *))ZSTD_trace_compress_end)(v3, v10);
  }
  *(_QWORD *)(a1 + 3736) = 0;
  return __readfsqword(0x28u) ^ v15;
}
