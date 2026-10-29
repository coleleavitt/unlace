char *__fastcall sub_2090790(int a1)
{
  char *v1; // rcx

  switch ( a1 )
  {
    case 0:
      j__strlen("xchg");
      v1 = "xchg";
      break;
    case 1:
      j__strlen("add");
      v1 = (char *)"add";
      break;
    case 2:
      j__strlen("sub");
      v1 = "sub";
      break;
    case 3:
      j__strlen("and");
      v1 = (char *)"and";
      break;
    case 4:
      j__strlen("nand");
      v1 = (char *)"nand";
      break;
    case 5:
      j__strlen("or");
      v1 = (char *)"or";
      break;
    case 6:
      j__strlen("xor");
      v1 = (char *)"xor";
      break;
    case 7:
      j__strlen("max");
      v1 = "max";
      break;
    case 8:
      j__strlen("min");
      v1 = (char *)"min";
      break;
    case 9:
      j__strlen("umax");
      v1 = "umax";
      break;
    case 10:
      j__strlen("umin");
      v1 = "umin";
      break;
    case 11:
      j__strlen("fadd");
      v1 = "fadd";
      break;
    case 12:
      j__strlen("fsub");
      v1 = "fsub";
      break;
    case 13:
      j__strlen("fmax");
      v1 = (char *)"fmax";
      break;
    case 14:
      j__strlen("fmin");
      v1 = (char *)"fmin";
      break;
    case 15:
      j__strlen("fmaximum");
      v1 = "fmaximum";
      break;
    case 16:
      j__strlen("fminimum");
      v1 = "fminimum";
      break;
    case 17:
      j__strlen("uinc_wrap");
      v1 = "uinc_wrap";
      break;
    case 18:
      j__strlen("udec_wrap");
      v1 = "udec_wrap";
      break;
    case 19:
      j__strlen("usub_cond");
      v1 = "usub_cond";
      break;
    case 20:
      j__strlen("usub_sat");
      v1 = "usub_sat";
      break;
    case 21:
      j__strlen("<invalid operation>");
      v1 = "<invalid operation>";
      break;
  }
  return v1;
}
