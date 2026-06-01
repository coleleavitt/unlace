__int64 __fastcall sub_21A2500(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  _BOOL4 v3; // eax
  _QWORD *v5; // rax
  _QWORD *v6; // [rsp+10h] [rbp-48h] BYREF
  __int64 v7; // [rsp+18h] [rbp-40h] BYREF
  __int64 v8[2]; // [rsp+20h] [rbp-38h] BYREF
  char v9; // [rsp+30h] [rbp-28h]

  (*(void (__fastcall **)(__int64 *, __int64, __int64))(*(_QWORD *)a1 + 144LL))(v8, a1, a2);
  v2 = v9 & 1;
  if ( (v9 & 1) != 0 )
  {
    v5 = (_QWORD *)v8[0];
    v8[0] = 0;
    v6 = v5;
    sub_A05760(&v7, &v6);
    if ( v6 )
      (*(void (__fastcall **)(_QWORD *))(*v6 + 8LL))(v6);
    v2 = 0;
  }
  else if ( v8[1] == 9 )
  {
    v3 = *(_QWORD *)v8[0] != 0x746C2E6D766C6C2ELL || *(_BYTE *)(v8[0] + 8) != 111;
    LOBYTE(v2) = !v3;
  }
  sub_111DFC0(v8);
  return v2;
}
