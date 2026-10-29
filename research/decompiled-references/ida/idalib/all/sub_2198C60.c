unsigned __int64 __fastcall sub_2198C60(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r12
  unsigned int *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  unsigned __int32 v8; // edx
  unsigned __int64 v9; // rax
  __int64 v11; // r8
  unsigned __int8 (*v12)(void); // rax
  __m128i v13[3]; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v14; // [rsp+40h] [rbp-38h]
  unsigned int v15; // [rsp+48h] [rbp-30h]
  unsigned int v16; // [rsp+50h] [rbp-28h]
  unsigned int v17; // [rsp+58h] [rbp-20h]

  if ( *(_DWORD *)(a1 + 60) == 1 )
  {
    v12 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 64LL);
    if ( (char *)v12 == (char *)sub_2195C40 )
    {
      if ( (unsigned int)(*(_DWORD *)(a1 + 8) - 19) <= 1 )
      {
LABEL_14:
        sub_2196710(v13, a1, *(const __m128i **)(*(_QWORD *)(a1 + 80) + 8LL * (unsigned int)a2));
        v2 = v15;
        goto LABEL_4;
      }
    }
    else if ( v12() )
    {
      goto LABEL_14;
    }
    sub_2196C60(v13, a1, *(const __m128i **)(*(_QWORD *)(a1 + 80) + 8LL * (unsigned int)a2));
    v2 = v14;
    goto LABEL_4;
  }
  sub_2198B90(v13, a1);
  if ( (_DWORD)a2 )
    v2 = v17;
  else
    v2 = v16;
LABEL_4:
  v3 = (unsigned int *)(sub_215DEC0(a1) + v2 + 8 * HIDWORD(a2));
  if ( (unsigned __int64)v3 < sub_215DEC0(a1) || (v4 = sub_215DEC0(a1), (unsigned __int64)(v3 + 2) > v5 + v4) )
    sub_2221C70("Malformed MachO file.", 1);
  v6 = *(unsigned int *)(a1 + 8);
  v7 = *(_QWORD *)v3;
  v8 = _byteswap_ulong(*v3);
  if ( (unsigned int)v6 <= 0x14 )
  {
    v11 = 1398784;
    v9 = HIDWORD(v7);
    if ( _bittest64(&v11, v6) )
      v9 = (HIDWORD(v7) >> 8) & 0xFF00 | (HIDWORD(v7) << 8) & 0xFF0000 | HIBYTE(HIDWORD(v7)) | (HIDWORD(v7) << 24);
    else
      v8 = *(_QWORD *)v3;
  }
  else
  {
    v8 = *(_QWORD *)v3;
    v9 = HIDWORD(v7);
  }
  return v8 | (v9 << 32);
}
