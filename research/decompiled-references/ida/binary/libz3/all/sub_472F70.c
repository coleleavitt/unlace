__int64 __fastcall sub_472F70(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 v9; // rcx
  __int64 v10; // r8
  int v12[2]; // [rsp+8h] [rbp-30h] BYREF

  v3 = (_QWORD *)sub_186B270(0x18u);
  v3[1] = a2;
  v4 = v3 + 1;
  *v3 = 0x100000002LL;
LABEL_2:
  if ( !v4 )
    return sub_4478F0(*(_QWORD *)(a1 + 16), a2, 1u);
  while ( 1 )
  {
    v5 = *((_DWORD *)v4 - 1);
    v6 = *(_QWORD *)(a1 + 16);
    if ( !v5 )
      break;
    v7 = (unsigned int)(v5 - 1);
    v8 = v4[v7];
    *((_DWORD *)v4 - 1) = v7;
    if ( !(unsigned __int8)sub_4478E0(v6, v8) && !(unsigned __int8)sub_15D37A0(a1 + 24, v8) )
    {
      *(_QWORD *)v12 = v4;
      sub_4729C0(a1, v8, v12, v9, v10);
      v4 = *(_QWORD **)v12;
      sub_15D0A90(a1 + 24, v8, 1);
      goto LABEL_2;
    }
  }
  sub_4478F0(v6, a2, 1u);
  return sub_186B220(v4 - 1);
}

