__int64 __fastcall sub_73DCB0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  const char *v5; // rsi
  __int64 v6; // rax

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
    sub_C4A760(a1);
  sub_5FF0F0(a2, "[shader");
  sub_5FF0F0(a2, "(");
  v4 = sub_5FF0F0(a2, "\"");
  switch ( *(_DWORD *)(a1 + 36) )
  {
    case '!':
      v5 = "pixel";
      break;
    case '"':
      v5 = "vertex";
      break;
    case '#':
      v5 = "geometry";
      break;
    case '$':
      v5 = "hull";
      break;
    case '%':
      v5 = "domain";
      break;
    case '&':
      v5 = "compute";
      break;
    case '\'':
    case '/':
      v5 = "amplification";
      break;
    case '(':
      v5 = "raygeneration";
      break;
    case ')':
      v5 = "intersection";
      break;
    case '*':
      v5 = "anyhit";
      break;
    case '+':
      v5 = "closesthit";
      break;
    case ',':
      v5 = "miss";
      break;
    case '-':
      v5 = "callable";
      break;
    case '.':
      v5 = "mesh";
      break;
  }
  v6 = sub_5FF0F0(v4, v5);
  sub_5FF0F0(v6, "\"");
  sub_5FF0F0(a2, ")");
  return sub_5FF0F0(a2, "]");
}

