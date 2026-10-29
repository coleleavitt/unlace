__int64 __fastcall sub_B975E0(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  unsigned int v4; // eax
  const void *v5; // rax
  size_t v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  void *v10; // rdi
  size_t v11; // r13
  __int64 result; // rax
  __int64 v13; // rax
  _BYTE *v14; // rdx
  int v15; // r13d
  int v16; // ebx
  __int64 v17; // rdi
  _WORD *v18; // rdx

  v3 = *(_QWORD *)a1;
  if ( (*(_BYTE *)(a1 + 9) & 1) == 0 && (*(_QWORD *)(a2 + 8) & 7LL) == 4 )
  {
    sub_971800(*(_QWORD *)a1, "__module_private__ ");
    v3 = *(_QWORD *)a1;
  }
  v4 = sub_F348E0(*(_BYTE *)(a2 + 73) >> 5);
  v5 = (const void *)sub_F34900(v4);
  v10 = *(void **)(v3 + 32);
  v11 = v6;
  if ( v6 > *(_QWORD *)(v3 + 24) - (_QWORD)v10 )
  {
    sub_22581D0(v3, v5, v6);
  }
  else if ( v6 )
  {
    memcpy(v10, v5, v6);
    *(_QWORD *)(v3 + 32) += v11;
    if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
      goto LABEL_7;
LABEL_15:
    sub_B8E960((const char **)a1, a2, 0, v7, v8, v9);
    goto LABEL_7;
  }
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
    goto LABEL_15;
LABEL_7:
  result = *(_QWORD *)(a2 + 40);
  if ( (result & 7) == 0 && (result & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v13 = *(_QWORD *)a1;
    v14 = *(_BYTE **)(*(_QWORD *)a1 + 32LL);
    if ( (unsigned __int64)v14 >= *(_QWORD *)(*(_QWORD *)a1 + 24LL) )
    {
      v13 = sub_2257CD0(v13, 32);
    }
    else
    {
      *(_QWORD *)(v13 + 32) = v14 + 1;
      *v14 = 32;
    }
    result = sub_B4EFB0(a2, v13);
  }
  if ( (*(_BYTE *)(a2 + 74) & 1) != 0 )
  {
    sub_971800(*(_QWORD *)a1, " {\n");
    sub_B96800(a1, a2 + 64, 1);
    v15 = *(_DWORD *)(a1 + 32);
    v16 = 0;
    if ( v15 )
    {
      do
      {
        while ( 1 )
        {
          v17 = *(_QWORD *)a1;
          v18 = *(_WORD **)(*(_QWORD *)a1 + 32LL);
          if ( *(_QWORD *)(*(_QWORD *)a1 + 24LL) - (_QWORD)v18 > 1u )
            break;
          ++v16;
          sub_22581D0(v17, "  ", 2);
          if ( v15 == v16 )
            return sub_971800(*(_QWORD *)a1, "}");
        }
        ++v16;
        *v18 = 8224;
        *(_QWORD *)(v17 + 32) += 2LL;
      }
      while ( v15 != v16 );
    }
    return sub_971800(*(_QWORD *)a1, "}");
  }
  return result;
}

