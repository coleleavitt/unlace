__int64 __fastcall sub_F281C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 1096);
  switch ( *(_DWORD *)(a2 + 40) )
  {
    case '!':
      result = sub_995540(v2, " Pixel");
      break;
    case '"':
      result = sub_995540(v2, " Vertex");
      break;
    case '#':
      result = sub_995540(v2, " Geometry");
      break;
    case '$':
      result = sub_995540(v2, " Hull");
      break;
    case '%':
      result = sub_995540(v2, " Domain");
      break;
    case '&':
      result = sub_995540(v2, " Compute");
      break;
    case '\'':
    case '/':
      result = sub_995540(v2, " Amplification");
      break;
    case '(':
      result = sub_995540(v2, " RayGeneration");
      break;
    case ')':
      result = sub_995540(v2, " Intersection");
      break;
    case '*':
      result = sub_995540(v2, " AnyHit");
      break;
    case '+':
      result = sub_995540(v2, " ClosestHit");
      break;
    case ',':
      result = sub_995540(v2, " Miss");
      break;
    case '-':
      result = sub_995540(v2, " Callable");
      break;
    case '.':
      result = sub_995540(v2, " Mesh");
      break;
  }
  return result;
}
