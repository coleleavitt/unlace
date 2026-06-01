/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_ACAD0
// Address: 0x00000000000ACAD0

//----- (00000000000ACAD0) ----------------------------------------------------
char __fastcall sub_ACAD0(__int64 a1, __int64 a2)
{
  char v4; // al
  __int64 v5; // rbx
  bool v6; // zf
  socklen_t v7; // eax
  struct sockaddr *p_addr; // rsi
  __int64 v9; // rdi
  int v10; // ebp
  _DWORD *v11; // rax
  socklen_t addr_len; // [rsp+Ch] [rbp-6Ch] BYREF
  char v14; // [rsp+10h] [rbp-68h] BYREF
  struct sockaddr addr; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v16; // [rsp+40h] [rbp-38h]

  v16 = __readfsqword(0x28u);
  if ( a2 )
  {
    v4 = *(_BYTE *)(a2 + 100);
    *(_BYTE *)(a1 + 100) = v4;
    v5 = *(_QWORD *)(a1 + 56);
    if ( v5 != -1 )
    {
LABEL_12:
      fcntl(v5, 2, 1);
      return 1;
    }
    while ( 1 )
    {
      v6 = v4 == 0;
      v7 = 28;
      if ( v6 )
        v7 = 16;
      addr_len = v7;
      p_addr = (struct sockaddr *)&v14;
      if ( v6 )
        p_addr = &addr;
      v9 = *(unsigned int *)(a2 + 56);
      v10 = accept(v9, p_addr, &addr_len);
      LODWORD(v5) = v10;
      *(_QWORD *)(a1 + 56) = v10;
      if ( v10 == -1 )
      {
        v11 = (_DWORD *)__errno(v9);
        if ( *v11 != 4 )
          break;
      }
      if ( v10 != -1 )
        goto LABEL_12;
      v4 = *(_BYTE *)(a1 + 100);
    }
    *(_QWORD *)(a1 + 88) = "accept";
    *(_DWORD *)(a1 + 96) = *v11;
  }
  return 0;
}
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
