__int64 __fastcall sub_F0AD20(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax

  v3 = *(_QWORD *)(a1 + 1096);
  switch ( (*(_BYTE *)(a2 + 18) >> 3) & 0xF )
  {
    case 1:
      sub_971800(v3, " altivec");
      v3 = *(_QWORD *)(a1 + 1096);
      break;
    case 2:
      sub_971800(v3, " altivec pixel");
      v3 = *(_QWORD *)(a1 + 1096);
      break;
    case 3:
      sub_971800(v3, " altivec bool");
      v3 = *(_QWORD *)(a1 + 1096);
      break;
    case 4:
      sub_971800(v3, " neon");
      v3 = *(_QWORD *)(a1 + 1096);
      break;
    case 5:
      sub_971800(v3, " neon poly");
      v3 = *(_QWORD *)(a1 + 1096);
      break;
    case 6:
      sub_971800(v3, " fixed-length sve data vector");
      v3 = *(_QWORD *)(a1 + 1096);
      break;
    case 7:
      sub_971800(v3, " fixed-length sve predicate vector");
      v3 = *(_QWORD *)(a1 + 1096);
      break;
    case 8:
      sub_971800(v3, " fixed-length rvv data vector");
      v3 = *(_QWORD *)(a1 + 1096);
      break;
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
      sub_971800(v3, " fixed-length rvv mask vector");
      v3 = *(_QWORD *)(a1 + 1096);
      break;
    default:
      break;
  }
  v4 = sub_971800(v3, " ");
  return sub_2257BD0(v4, *(unsigned int *)(a2 + 20));
}

