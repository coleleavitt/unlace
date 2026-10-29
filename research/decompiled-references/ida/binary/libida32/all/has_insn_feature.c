__int64 __fastcall has_insn_feature(__int64 a1, const char *a2)
{
  __int64 ph; // rax
  unsigned int v3; // edx
  int v4; // ecx

  ph = get_ph(a1, a2);
  v3 = 0;
  v4 = *(_DWORD *)(ph + 104);
  if ( (unsigned __int16)a1 >= v4 && (unsigned __int16)a1 < *(int *)(ph + 108) )
    LOBYTE(v3) = (*(_DWORD *)(*(_QWORD *)(ph + 112) + 16LL * ((unsigned __int16)a1 - v4) + 8) & (unsigned int)a2) != 0;
  return v3;
}

