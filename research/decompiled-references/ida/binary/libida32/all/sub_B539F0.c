unsigned __int64 __fastcall sub_B539F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // r13d
  __int64 v8; // rax
  unsigned __int64 v9; // rbp
  __int64 v10; // rdi
  __int64 (*v11)(void); // rax
  unsigned int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 (*v17)(void); // rax
  unsigned __int64 v18; // rax

  v7 = sub_B52330(a1, a2, a3, a4);
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v8 + 16) == 26
     || (v5 = *(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v5 + 16) == 26)
     && (v8 = sub_F3F310(*(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, v5, v6)) != 0)
    && *(char *)(v8 + 19) < 0 )
  {
    v5 = *(unsigned __int16 *)(v8 + 22);
    v9 = *(unsigned int *)(v8 + 8 * v5 + 48);
    if ( v7 )
    {
LABEL_4:
      v10 = **(_QWORD **)(a1 + 120);
      v11 = *(__int64 (**)(void))(*(_QWORD *)v10 + 16LL);
      if ( (char *)v11 == (char *)sub_B4F9D0 )
        v12 = sub_B4F9D0(v10, a2, v5, v6);
      else
        v12 = v11();
      v14 = v12;
      if ( !(_DWORD)v9 )
      {
        v15 = (unsigned int)(v7 - 1);
        v16 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8 * v15);
        v17 = *(__int64 (**)(void))(*(_QWORD *)v16 + 16LL);
        if ( (char *)v17 == (char *)sub_B4F9D0 )
          v18 = sub_B4F9D0(v16, a2, v15, v13);
        else
          v18 = v17();
        v9 = HIDWORD(v18);
      }
      return (v9 << 32) | v14;
    }
    if ( (_DWORD)v9 )
    {
      v14 = *(_DWORD *)(v8 + 8 * v5 + 48);
      return (v9 << 32) | v14;
    }
  }
  else
  {
    v9 = 0;
    if ( v7 )
      goto LABEL_4;
  }
  return 0;
}

