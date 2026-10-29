/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AB820
// Address: 0x00000000000AB820

//----- (00000000000AB820) ----------------------------------------------------
__int64 __fastcall sub_AB820(__int64 a1, signed int a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  unsigned __int64 v4; // rbx
  __time_t v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r15
  bool v8; // cc
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbp
  _DWORD *v14; // rax
  char v16; // [rsp+4h] [rbp-44h]
  struct pollfd fds; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v18; // [rsp+10h] [rbp-38h]

  v18 = __readfsqword(0x28u);
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 152LL))(a1) )
  {
LABEL_2:
    *(_QWORD *)(a1 + 88) = "select";
    return (unsigned int)-1;
  }
  while ( 2 )
  {
    v3 = *(_QWORD *)(a1 + 40);
    if ( v3 )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32 * v3 - 16);
      if ( a2 < 0 )
        goto LABEL_13;
    }
    else
    {
      v4 = 0;
      if ( a2 < 0 )
        goto LABEL_13;
    }
    v5 = qtime64();
    v6 = sub_A9580(v5, a2);
    if ( v6 )
    {
      v7 = v6;
      v8 = v6 <= v4;
      v9 = v4;
      if ( v8 )
        v9 = v7;
      if ( !v4 )
        v9 = v7;
      v16 = 0;
      v4 = v9;
      goto LABEL_15;
    }
LABEL_13:
    if ( v4 )
    {
      v16 = 1;
      v7 = 0;
LABEL_15:
      v10 = qtime64();
      v11 = 1000000 * HIDWORD(v10) + (unsigned int)v10;
      v12 = 1000000 * HIDWORD(v4) + (unsigned int)v4;
      if ( v12 <= v11 )
        v12 = v11;
      v13 = (v12 - v11) / 0x3E8;
      goto LABEL_19;
    }
    v16 = 1;
    LODWORD(v13) = -1;
    v7 = 0;
LABEL_19:
    fds.fd = *(_DWORD *)(a1 + 56);
    fds.events = 1;
    while ( 1 )
    {
      v2 = poll(&fds, 1u, v13);
      if ( v2 != -1 )
        break;
      v14 = (_DWORD *)__errno(&fds);
      if ( *v14 != 4 )
      {
        *(_QWORD *)(a1 + 88) = "poll";
LABEL_28:
        *(_DWORD *)(a1 + 96) = *v14;
        return v2;
      }
    }
    if ( !v2 )
    {
      if ( !v16 && qtime64() >= v7 )
      {
        *(_QWORD *)(a1 + 88) = "poll";
        v2 = -1;
        *(_DWORD *)(a1 + 96) = 62;
        return v2;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 152LL))(a1) )
        continue;
      goto LABEL_2;
    }
    break;
  }
  if ( (v2 & 0x80000000) != 0 )
  {
    *(_QWORD *)(a1 + 88) = "poll";
    v14 = (_DWORD *)__errno(&fds);
    goto LABEL_28;
  }
  return v2;
}
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
