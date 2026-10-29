/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E5CF0
// Address: 0x00000000000E5CF0

//----- (00000000000E5CF0) ----------------------------------------------------
char *__fastcall sub_E5CF0(__int64 a1)
{
  char *v1; // rax
  char *v2; // r13
  const char *v3; // r12
  _QWORD *v4; // rbx
  char *v5; // rax
  char *v6; // r15
  _QWORD *v7; // rbp
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rdx

  v1 = *(char **)a1;
  if ( *(_QWORD *)(a1 + 8) - *(_QWORD *)a1 < 2u || *v1 != 84 )
    goto LABEL_11;
  if ( v1[1] == 115 )
  {
    *(_QWORD *)a1 = v1 + 2;
    v2 = "";
    v3 = "struct";
    goto LABEL_12;
  }
  if ( *v1 != 84 )
    goto LABEL_11;
  if ( v1[1] == 117 )
  {
    *(_QWORD *)a1 = v1 + 2;
    v2 = "";
    v3 = "union";
    goto LABEL_12;
  }
  if ( *v1 == 84 && v1[1] == 101 )
  {
    *(_QWORD *)a1 = v1 + 2;
    v2 = "";
    v3 = "enum";
  }
  else
  {
LABEL_11:
    v3 = nullptr;
    v2 = nullptr;
  }
LABEL_12:
  v4 = nullptr;
  v5 = sub_D6270((char **)a1, nullptr);
  if ( v5 )
  {
    v6 = v5;
    if ( v3 == v2 )
    {
      return v5;
    }
    else
    {
      v7 = *(_QWORD **)(a1 + 4832);
      v8 = v7[1];
      if ( (unsigned __int64)(v8 + 48) < 0xFF0 )
      {
        v10 = v7 + 1;
      }
      else
      {
        v9 = (_QWORD *)operator new[](0x1000u);
        *v9 = v7;
        v9[1] = 0;
        *(_QWORD *)(a1 + 4832) = v9;
        v8 = 0;
        v10 = v9 + 1;
        v7 = v9;
      }
      *v10 = v8 + 48;
      v4 = (_QWORD *)((char *)v7 + v8 + 16);
      *(_DWORD *)((char *)v7 + v8 + 24) = 16843014;
      *v4 = off_153418;
      *(_QWORD *)((char *)v7 + v8 + 32) = v3;
      *(_QWORD *)((char *)v7 + v8 + 40) = v2;
      *(_QWORD *)((char *)v7 + v8 + 48) = v6;
    }
  }
  return (char *)v4;
}
// 153418: using guessed type __int64 (__fastcall *off_153418[7])();
