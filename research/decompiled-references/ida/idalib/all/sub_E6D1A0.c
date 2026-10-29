__int64 __fastcall sub_E6D1A0(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  size_t v4; // rax
  __int64 result; // rax
  const char *v6; // rsi
  size_t v7; // rax
  __int16 v8; // bx
  size_t v9; // rax
  size_t v10; // rax
  size_t v11; // rax
  size_t v12; // rax
  size_t v13; // rax
  size_t v14; // rax
  size_t v15; // rax
  size_t v16; // rax
  size_t v17; // rax
  size_t v18; // rax
  size_t v19; // rax
  size_t v20; // rax
  size_t v21; // rax
  size_t v22; // rax
  size_t v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  size_t v26; // rax
  __int16 *v27; // [rsp+10h] [rbp-98h] BYREF
  __int64 v28; // [rsp+18h] [rbp-90h]
  __int16 *v29; // [rsp+20h] [rbp-88h] BYREF
  __int64 v30; // [rsp+28h] [rbp-80h]
  int v31; // [rsp+30h] [rbp-78h]
  __int16 v32; // [rsp+40h] [rbp-68h] BYREF
  __int64 v33; // [rsp+48h] [rbp-60h]
  __int64 v34; // [rsp+50h] [rbp-58h]
  int v35; // [rsp+58h] [rbp-50h]

  v3 = a1 + 1048;
  sub_E5B230(a1, a2);
  sub_E63A60((__int64)&v29, a1, *(_QWORD *)(a2 + 56), 1);
  v32 = 7;
  v33 = (__int64)v29;
  v29 = nullptr;
  v34 = v30;
  v30 = 0;
  v35 = v31;
  v31 = 0;
  v4 = j__strlen("type");
  v27 = &v32;
  v28 = a1 + 1048;
  sub_E585D0(a1 + 1048, (__int64)"type", v4, (__int64)sub_E58580, &v27);
  sub_222B2A0(&v32);
  sub_E5D2E0((__int64 *)&v29);
  result = *(_BYTE *)(a2 + 76) & 3;
  if ( (_BYTE)result == 1 )
  {
    v6 = "required";
  }
  else
  {
    if ( (_BYTE)result != 2 )
      goto LABEL_5;
    v6 = "optional";
  }
  sub_E598C0((__int64)&v32, v6);
  v7 = j__strlen("control");
  v29 = &v32;
  v30 = a1 + 1048;
  sub_E585D0(v3, (__int64)"control", v7, (__int64)sub_E58580, &v29);
  result = sub_222B2A0(&v32);
LABEL_5:
  v8 = *(_WORD *)(a2 + 72);
  if ( !v8 )
    return result;
  if ( (v8 & 2) != 0 )
  {
    sub_E673B0((__int64)&v29, a1, *(_QWORD *)(a2 + 104));
    v32 = 7;
    v33 = (__int64)v29;
    v29 = nullptr;
    v34 = v30;
    v30 = 0;
    v35 = v31;
    v31 = 0;
    v23 = j__strlen("getter");
    v27 = &v32;
    v28 = a1 + 1048;
    sub_E585D0(v3, (__int64)"getter", v23, (__int64)sub_E58580, &v27);
    sub_222B2A0(&v32);
    sub_E5D2E0((__int64 *)&v29);
    if ( (v8 & 0x80u) == 0 )
      goto LABEL_8;
LABEL_12:
    sub_E673B0((__int64)&v29, a1, *(_QWORD *)(a2 + 112));
    v32 = 7;
    v24 = (__int64)v29;
    v29 = nullptr;
    v33 = v24;
    v25 = v30;
    v30 = 0;
    v34 = v25;
    LODWORD(v25) = v31;
    v31 = 0;
    v35 = v25;
    v26 = j__strlen("setter");
    v27 = &v32;
    v28 = a1 + 1048;
    sub_E585D0(v3, (__int64)"setter", v26, (__int64)sub_E58580, &v27);
    sub_222B2A0(&v32);
    sub_E5D2E0((__int64 *)&v29);
    goto LABEL_8;
  }
  if ( (v8 & 0x80u) != 0 )
    goto LABEL_12;
LABEL_8:
  v9 = j__strlen("readonly");
  sub_E59B90(a1, (__int64)"readonly", v9, v8 & 1);
  v10 = j__strlen("assign");
  sub_E59B90(a1, (__int64)"assign", v10, (v8 & 4) != 0);
  v11 = j__strlen("readwrite");
  sub_E59B90(a1, (__int64)"readwrite", v11, (v8 & 8) != 0);
  v12 = j__strlen("retain");
  sub_E59B90(a1, (__int64)"retain", v12, (v8 & 0x10) != 0);
  v13 = j__strlen("copy");
  sub_E59B90(a1, (__int64)"copy", v13, (v8 & 0x20) != 0);
  v14 = j__strlen("nonatomic");
  sub_E59B90(a1, (__int64)"nonatomic", v14, (v8 & 0x40) != 0);
  v15 = j__strlen("atomic");
  sub_E59B90(a1, (__int64)"atomic", v15, HIBYTE(v8) & 1);
  v16 = j__strlen("weak");
  sub_E59B90(a1, (__int64)"weak", v16, (v8 & 0x200) != 0);
  v17 = j__strlen("strong");
  sub_E59B90(a1, (__int64)"strong", v17, (v8 & 0x400) != 0);
  v18 = j__strlen("unsafe_unretained");
  sub_E59B90(a1, (__int64)"unsafe_unretained", v18, (v8 & 0x800) != 0);
  v19 = j__strlen("class");
  sub_E59B90(a1, (__int64)"class", v19, (v8 & 0x4000) != 0);
  v20 = j__strlen("direct");
  sub_E59B90(a1, (__int64)"direct", v20, v8 < 0);
  v21 = j__strlen("nullability");
  sub_E59B90(a1, (__int64)"nullability", v21, (v8 & 0x1000) != 0);
  v22 = j__strlen("null_resettable");
  return sub_E59B90(a1, (__int64)"null_resettable", v22, (v8 & 0x2000) != 0);
}
