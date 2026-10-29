__int64 __fastcall sub_A01150(__int64 a1)
{
  _WORD *v1; // rbp
  __int16 v2; // dx
  unsigned int v3; // ecx
  unsigned int v4; // ebx
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 (__fastcall *v7)(__int64); // rdx
  __int64 v8; // rbp
  __int64 v10; // rax
  size_t v11; // r13
  const char *v12; // rax
  size_t v13; // rdx
  size_t v14; // r12
  const char *v15; // rax
  size_t v16; // rdx

  v1 = (_WORD *)sub_BFBAE0(a1);
  v2 = *v1 & 0x1FF;
  LOBYTE(v3) = v2 == 9;
  v4 = v3;
  LOBYTE(v4) = v2 == 18 || v2 == 9;
  if ( (_BYTE)v4 )
    return 1;
  if ( v2 == 92
    && ((v5 = sub_C946E0(v1),
         v6 = sub_C94710(v1),
         v7 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL),
         v7 != sub_A01140)
      ? (v8 = v7(v6))
      : (v8 = sub_B70A60(v6)),
        v5
     && v8
     && (unsigned __int8)sub_B8EC80(v8)
     && (v10 = *(_QWORD *)(v5 + 40), (v10 & 7) == 0)
     && (v10 & 0xFFFFFFFFFFFFFFF8LL) != 0
     && (v11 = j__strlen("c_str"), v12 = sub_995750(v5), v13 == v11)
     && (!v13 || !memcmp(v12, "c_str", v13))
     && (v14 = j__strlen("basic_string"), v15 = sub_995750(v8), v16 == v14)
     && (!v16 || !memcmp(v15, "basic_string", v16))) )
  {
    return 1;
  }
  else
  {
    return v4;
  }
}
