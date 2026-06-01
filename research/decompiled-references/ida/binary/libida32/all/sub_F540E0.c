void __fastcall sub_F540E0(__m128i *a1, __int64 a2, unsigned __int64 a3)
{
  char *v5; // r15
  size_t v6; // rax
  __int64 v7; // r9
  char *v8; // r15
  size_t v9; // rax
  __int64 v10; // r9
  const char *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  const char *v15; // rsi
  char *v16; // r15
  size_t v17; // rax
  char *v18; // r15
  size_t v19; // rax
  __int64 v20; // r9

  switch ( (*(_BYTE *)(a2 + 18) >> 3) & 0xF )
  {
    case 0:
      sub_971800(a3, "__attribute__((__vector_size__(");
      v18 = *(char **)(a2 + 40);
      if ( v18 )
      {
        v19 = j__strlen("\n");
        sub_EE3EC0(v18, a3, 0, a1, 0, 0, "\n", v19);
      }
      sub_971800(a3, " * sizeof(");
      sub_F537A0(a1, *(_QWORD *)(a2 + 32), a3, nullptr, 0, v20);
      v11 = ")))) ";
      goto LABEL_9;
    case 1:
      v11 = "__vector ";
      goto LABEL_9;
    case 2:
      sub_971800(a3, "__vector __pixel ");
      return;
    case 3:
      v11 = "__vector __bool ";
      goto LABEL_9;
    case 4:
      v15 = "__attribute__((neon_vector_type(";
      goto LABEL_13;
    case 5:
      v15 = "__attribute__((neon_polyvector_type(";
LABEL_13:
      sub_971800(a3, v15);
      v16 = *(char **)(a2 + 40);
      if ( v16 )
      {
        v17 = j__strlen("\n");
        sub_EE3EC0(v16, a3, 0, a1, 0, 0, "\n", v17);
      }
      goto LABEL_8;
    case 6:
    case 7:
      sub_971800(a3, "__attribute__((__arm_sve_vector_bits__(");
      v5 = *(char **)(a2 + 40);
      if ( v5 )
      {
        v6 = j__strlen("\n");
        sub_EE3EC0(v5, a3, 0, a1, 0, 0, "\n", v6);
        if ( ((*(_BYTE *)(a2 + 18) >> 3) & 0xF) == 7 )
          sub_971800(a3, " * 8");
        sub_971800(a3, " * sizeof(");
        sub_F537A0(a1, *(_QWORD *)(a2 + 32), a3, nullptr, 0, v7);
        sub_971800(a3, ") * 8");
      }
      goto LABEL_8;
    case 8:
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
      sub_971800(a3, "__attribute__((__riscv_rvv_vector_bits__(");
      v8 = *(char **)(a2 + 40);
      if ( v8 )
      {
        v9 = j__strlen("\n");
        sub_EE3EC0(v8, a3, 0, a1, 0, 0, "\n", v9);
        sub_971800(a3, " * sizeof(");
        sub_F537A0(a1, *(_QWORD *)(a2 + 32), a3, nullptr, 0, v10);
        sub_971800(a3, ") * 8");
      }
LABEL_8:
      v11 = "))) ";
LABEL_9:
      sub_971800(a3, v11);
      sub_F507B0(a1, *(_QWORD *)(a2 + 32), a3, v12, v13, v14);
      break;
    default:
      return;
  }
}

