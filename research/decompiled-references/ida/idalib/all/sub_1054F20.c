__int64 __fastcall sub_1054F20(__int64 a1, const __m128i *a2, __int64 a3)
{
  __int32 v4; // eax
  size_t v5; // rax
  char *v6; // rsi
  int v7; // eax
  char *v8; // rcx
  _QWORD *v9; // rax
  __int32 v10; // edx
  __int64 result; // rax
  void *v12[2]; // [rsp+0h] [rbp-58h] BYREF
  _BYTE v13[72]; // [rsp+10h] [rbp-48h] BYREF

  sub_102D220(a1, a2, a3);
  *(_BYTE *)(a1 + 528) = 0;
  *(_QWORD *)a1 = &off_2C2F168;
  *(_QWORD *)(a1 + 512) = a1 + 528;
  *(_WORD *)(a1 + 548) = 0;
  *(_QWORD *)(a1 + 552) = 0;
  *(_QWORD *)(a1 + 568) = a1 + 584;
  *(_BYTE *)(a1 + 584) = 0;
  v4 = a2[2].m128i_i32[0];
  *(_QWORD *)(a1 + 520) = 0;
  *(_BYTE *)(a1 + 550) = 0;
  *(_DWORD *)(a1 + 544) = 0;
  *(_WORD *)(a1 + 560) = 0;
  *(_BYTE *)(a1 + 562) = 0;
  *(_DWORD *)(a1 + 564) = 0;
  *(_QWORD *)(a1 + 576) = 0;
  *(_DWORD *)(a1 + 340) = 6;
  if ( (unsigned int)(v4 - 16) > 1 )
  {
    if ( (a2[3].m128i_i32[0] & 0xFFFFFFEF) == 3 )
    {
      v12[0] = v13;
      v5 = j__strlen("n32");
      v6 = (char *)"n32";
    }
    else
    {
      v12[0] = v13;
      v5 = j__strlen("n64");
      v6 = (char *)"n64";
    }
  }
  else
  {
    v12[0] = v13;
    v5 = j__strlen("o32");
    v6 = "o32";
  }
  sub_10388C0(v12, v6, (__int64)&v6[v5]);
  sub_1053B80(a1, (__int64)v12);
  if ( v12[0] != v13 )
    operator delete(v12[0]);
  v7 = sub_9B4AA0(a1 + 568, "o32");
  v8 = "mips32r2";
  if ( v7 )
    v8 = "mips64r2";
  v9 = sub_99BDC0((_QWORD *)(a1 + 512), 0, *(_QWORD *)(a1 + 520), v8, 8u);
  v10 = a2[2].m128i_i32[3];
  LOBYTE(v9) = v10 == 12;
  LOBYTE(v10) = v10 == 3;
  result = v10 | (unsigned int)v9;
  *(_BYTE *)(a1 + 550) = result;
  return result;
}
