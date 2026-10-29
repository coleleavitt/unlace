__int64 __fastcall sub_142F80(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // rdi
  bool (__fastcall *v6)(__int64, unsigned __int8); // rax
  int v7; // eax
  bool v8; // al

  sub_19F020();
  *(_QWORD *)a1 = &off_231AB8;
  *(_QWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 96) = -1;
  sub_F1820((_DWORD *)(a1 + 100), -1);
  result = *(unsigned int *)(a1 + 80);
  if ( (result & 0x10000) == 0 )
  {
    if ( (result & 0x20000) == 0 )
      return result;
LABEL_7:
    result = set_ida_state();
    *(_DWORD *)(a1 + 96) = result;
    return result;
  }
  v3 = operator new(0x10u);
  v4 = TProgram::application;
  *(_QWORD *)v3 = TProgram::application;
  v5 = v4 + 136;
  v6 = *(bool (__fastcall **)(__int64, unsigned __int8))(*(_QWORD *)(v4 + 136) + 128LL);
  if ( v6 == sub_13F7A0 )
  {
    v7 = dword_250228;
    dword_250228 = 0;
    v8 = v7 != 0;
  }
  else
  {
    v8 = v6(v5, 0);
  }
  *(_BYTE *)(v3 + 8) = v8;
  result = *(unsigned int *)(a1 + 80);
  *(_QWORD *)(a1 + 88) = v3;
  if ( (result & 0x20000) != 0 )
    goto LABEL_7;
  return result;
}

