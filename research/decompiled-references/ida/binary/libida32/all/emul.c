__int64 __fastcall emul(__int64 a1, __int64 a2, _OWORD *a3)
{
  int v4; // ebp
  int v5; // r12d
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 result; // rax
  _WORD v10[16]; // [rsp+0h] [rbp-68h] BYREF
  int v11[6]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+38h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  emovi(a1, v10);
  emovi(a2, v11);
  v4 = v10[1];
  v5 = HIWORD(v11[0]);
  *a3 = 0;
  if ( v4 && v5 )
  {
    v6 = sub_80CEE0((__int64)v10, v11);
    v7 = (unsigned int)emdnorm(v11, v6, 0, (unsigned int)(v4 + v5 - 16382), 112);
    result = 2;
    if ( !(_BYTE)v7 )
      return result;
    LOWORD(v11[0]) = -(v10[0] != LOWORD(v11[0]));
    emovo(v11, a3, v7, v8);
  }
  return 1;
}

