/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36AB0
// Address: 0x0000000000036AB0

//----- (0000000000036AB0) ----------------------------------------------------
__int64 __fastcall sub_36AB0(_DWORD *a1, __int64 a2, int a3)
{
  unsigned int v3; // r15d
  FILE *v4; // rax
  FILE *v5; // rbx
  int v6; // eax
  __int64 v7; // rax
  size_t v8; // r12
  __int64 v9; // rbp
  char *v10; // rdi
  char v12; // [rsp+Bh] [rbp-144Dh] BYREF
  char v13; // [rsp+Ch] [rbp-144Ch] BYREF
  char src[1040]; // [rsp+10h] [rbp-1448h] BYREF
  char v15[4104]; // [rsp+420h] [rbp-1038h] BYREF
  unsigned __int64 v16; // [rsp+1428h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v3 = 0;
  qsnprintf(v15, 4096, "/proc/%u/stat", a3);
  v4 = qfopen(v15, (__int64)"r");
  if ( v4 )
  {
    v5 = v4;
    *a1 = 0;
    v6 = sub_37E90(v4, "%d %1024s %c %d", (unsigned int)&v13, src, &v12, (_DWORD)a1);
    LOBYTE(v3) = v6 == 4;
    if ( a2 && v6 == 4 )
    {
      v7 = __strlen_chk(src, 1025);
      if ( v7 )
      {
        v8 = v7;
        v9 = v7 + 1;
        if ( *(_QWORD *)(a2 + 16) >= (unsigned __int64)(v7 + 1) )
        {
          v10 = *(char **)a2;
        }
        else
        {
          v10 = (char *)qvector_reserve(a2, *(char **)a2, v7 + 1, 1u);
          *(_QWORD *)a2 = v10;
        }
        *(_QWORD *)(a2 + 8) = v9;
        memmove(v10, src, v8);
        *(_BYTE *)(*(_QWORD *)a2 + v8) = 0;
      }
      else
      {
        *(_QWORD *)(a2 + 8) = 0;
      }
    }
    qfclose(v5);
  }
  return v3;
}
// 33AE0: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
