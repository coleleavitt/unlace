void __fastcall sub_B97FA0(__int64 a1, __int64 a2)
{
  char *v2; // r12
  __int64 v5; // rdi
  _QWORD *v6; // rdx
  const char *v7; // rsi
  __int64 v8; // r12
  __int64 v9; // rax
  int v10; // ebx
  int v11; // r13d
  __int64 v12; // rdi
  _WORD *v13; // rdx
  __int64 v14; // rax

  v2 = (char *)"C";
  v5 = *(_QWORD *)a1;
  v6 = *(_QWORD **)(v5 + 32);
  if ( *(_BYTE *)(a2 + 49) >> 5 != 1 )
    v2 = "C++";
  if ( *(_QWORD *)(v5 + 24) - (_QWORD)v6 > 7u )
  {
    *v6 = 0x22206E7265747865LL;
    *(_QWORD *)(v5 + 32) += 8LL;
  }
  else
  {
    v5 = sub_22581D0(v5, "extern \"", 8);
  }
  v7 = v2;
  v8 = a2 + 40;
  v9 = sub_971800(v5, v7);
  sub_971800(v9, "\" ");
  if ( (*(_BYTE *)(a2 + 50) & 1) != 0 )
  {
    v10 = 0;
    sub_971800(*(_QWORD *)a1, "{\n");
    sub_B96800(a1, v8, 1);
    v11 = *(_DWORD *)(a1 + 32);
    if ( v11 )
    {
      do
      {
        while ( 1 )
        {
          v12 = *(_QWORD *)a1;
          v13 = *(_WORD **)(*(_QWORD *)a1 + 32LL);
          if ( *(_QWORD *)(*(_QWORD *)a1 + 24LL) - (_QWORD)v13 > 1u )
            break;
          ++v10;
          sub_22581D0(v12, "  ", 2);
          if ( v11 == v10 )
            goto LABEL_9;
        }
        ++v10;
        *v13 = 8224;
        *(_QWORD *)(v12 + 32) += 2LL;
      }
      while ( v11 != v10 );
    }
LABEL_9:
    sub_971800(*(_QWORD *)a1, "}");
  }
  else
  {
    v14 = sub_B6AC30(a2 + 40);
    sub_B91A70(a1, v14);
  }
}

