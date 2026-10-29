_BYTE *__fastcall sub_F0B4B0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  _BYTE *result; // rax
  const char *v5; // rbx
  size_t v6; // r12
  __int64 v7; // rax
  __int64 v8; // rax

  v3 = *(_QWORD *)(a1 + 1096);
  result = *(_BYTE **)(v3 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(v3 + 24) )
  {
    result = (_BYTE *)sub_2257CD0(v3, 32);
  }
  else
  {
    *(_QWORD *)(v3 + 32) = result + 1;
    *result = 32;
  }
  switch ( *(_DWORD *)(a2 + 36) )
  {
    case 1:
      result = (_BYTE *)sub_971800(*(_QWORD *)(a1 + 1096), "linker");
      break;
    case 2:
      result = (_BYTE *)sub_971800(*(_QWORD *)(a1 + 1096), "lib");
      break;
    case 3:
      result = (_BYTE *)sub_971800(*(_QWORD *)(a1 + 1096), "compiler");
      break;
    case 4:
      result = (_BYTE *)sub_971800(*(_QWORD *)(a1 + 1096), "exestr");
      break;
    case 5:
      result = (_BYTE *)sub_971800(*(_QWORD *)(a1 + 1096), "user");
      break;
    default:
      break;
  }
  v5 = (const char *)(a2 + 40);
  if ( a2 != -40 )
  {
    result = (_BYTE *)j__strlen(v5);
    v6 = (size_t)result;
    if ( result )
    {
      v7 = sub_971800(*(_QWORD *)(a1 + 1096), " \"");
      v8 = sub_9717A0(v7, v5, v6);
      return (_BYTE *)sub_971800(v8, "\"");
    }
  }
  return result;
}

