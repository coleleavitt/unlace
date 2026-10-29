__int64 __fastcall sub_2032090(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rbp
  __int64 v6; // r13
  size_t v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 v11; // r14
  size_t v12; // rax
  __int64 v13; // rbx
  __int64 v14; // r13
  __int64 v15; // rdx
  size_t v16; // rax
  unsigned int v18; // r14d
  bool v19; // zf
  __int64 v20; // rdi
  __int64 v21; // r13
  const void *v22; // rax
  size_t v23; // rdx
  size_t v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // [rsp+0h] [rbp-68h] BYREF
  char v28; // [rsp+8h] [rbp-60h]
  const char *v29[2]; // [rsp+10h] [rbp-58h] BYREF
  __int128 v30; // [rsp+20h] [rbp-48h]
  __int128 v31; // [rsp+30h] [rbp-38h]

  sub_995540(a1, "!DIFile(");
  v27 = a1;
  v28 = 1;
  v29[0] = ", ";
  if ( !(_BYTE)byte_2CFC658 && __cxa_guard_acquire(&byte_2CFC658) )
  {
    qword_2CFC668 = 0;
    qword_2CFC660 = (__int64)off_2BE5D20;
    qword_2CFC670 = 0;
    qword_2CFC678 = 0;
    __cxa_atexit(nullsub_1290, &qword_2CFC660, &off_2B25620);
    __cxa_guard_release(&byte_2CFC658);
  }
  v29[1] = (const char *)&qword_2CFC660;
  v3 = sub_2031EC0(a2, 0);
  v5 = v4;
  v6 = v3;
  v7 = j__strlen("filename");
  sub_2030D70(&v27, "filename", v7, v6, v5, 0);
  v8 = sub_2031EC0(a2, 1u);
  v10 = v9;
  v11 = v8;
  v12 = j__strlen("directory");
  sub_2030D70(&v27, "directory", v12, v11, v10, 0);
  if ( *(_BYTE *)(a2 + 32) )
  {
    v18 = 0;
    sub_20A0B40(*(_QWORD *)(a2 + 24));
    v19 = *(_BYTE *)(a2 + 32) == 0;
    v30 = 0;
    v31 = 0;
    if ( !v19 )
    {
      v25 = sub_20A0B40(*(_QWORD *)(a2 + 24));
      v18 = *(_DWORD *)(a2 + 16);
      *((_QWORD *)&v30 + 1) = v25;
      *(_QWORD *)&v31 = v26;
    }
    v20 = v27;
    if ( v28 )
      v28 = 0;
    else
      v20 = sub_202F8E0(v27, v29);
    v21 = sub_995540(v20, "checksumkind: ");
    v22 = (const void *)sub_206D520(v18);
    sub_9954E0(v21, v22, v23);
    v24 = j__strlen("checksum");
    sub_2030D70(&v27, "checksum", v24, *((__int64 *)&v30 + 1), v31, 0);
  }
  v13 = *(_QWORD *)(a2 + 40);
  v14 = 0;
  if ( v13 )
  {
    v13 = sub_20A0B40(v13);
    v14 = v15;
  }
  v16 = j__strlen("source");
  sub_2030E00(&v27, "source", v16, v13, v14);
  return sub_995540(a1, ")");
}
