void __fastcall sub_F775E0(__m128i *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v6; // r9
  const char *v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r9
  const char *v15; // rsi
  __int64 v16; // rax

  switch ( (*(_BYTE *)(a2 + 18) >> 3) & 0xF )
  {
    case 0:
      v12 = sub_995540(a3, "__attribute__((__vector_size__(");
      v13 = sub_227B910(v12, *(unsigned int *)(a2 + 20));
      sub_995540(v13, " * sizeof(");
      sub_F774E0(a1, *(_QWORD *)(a2 + 32), a3, nullptr, 0, v14);
      v7 = ")))) ";
      goto LABEL_5;
    case 1:
      v7 = "__vector ";
      goto LABEL_5;
    case 2:
      sub_995540(a3, "__vector __pixel ");
      return;
    case 3:
      v7 = "__vector __bool ";
      goto LABEL_5;
    case 4:
      v15 = "__attribute__((neon_vector_type(";
      goto LABEL_13;
    case 5:
      v15 = "__attribute__((neon_polyvector_type(";
LABEL_13:
      v16 = sub_995540(a3, v15);
      v7 = "))) ";
      v8 = sub_227B910(v16, *(unsigned int *)(a2 + 20));
      goto LABEL_6;
    case 6:
    case 7:
      sub_995540(a3, "__attribute__((__arm_sve_vector_bits__(");
      if ( ((*(_BYTE *)(a2 + 18) >> 3) & 0xF) != 7 )
        goto LABEL_3;
      sub_227B910(a3, (unsigned int)(8 * *(_DWORD *)(a2 + 20)));
      goto LABEL_4;
    case 8:
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
      sub_995540(a3, "__attribute__((__riscv_rvv_vector_bits__(");
LABEL_3:
      sub_227B910(a3, *(unsigned int *)(a2 + 20));
LABEL_4:
      sub_995540(a3, " * sizeof(");
      sub_F774E0(a1, *(_QWORD *)(a2 + 32), a3, nullptr, 0, v6);
      v7 = ") * 8))) ";
LABEL_5:
      v8 = a3;
LABEL_6:
      sub_995540(v8, v7);
      sub_F744F0(a1, *(_QWORD *)(a2 + 32), a3, v9, v10, v11);
      break;
    default:
      return;
  }
}
