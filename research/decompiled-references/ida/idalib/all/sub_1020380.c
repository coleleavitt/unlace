__int64 __fastcall sub_1020380(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  _BYTE v8[9]; // [rsp+Fh] [rbp-9h] BYREF

  v8[0] = 0;
  if ( (unsigned int)(a3 + 1) <= 1 )
    goto LABEL_9;
  if ( a3 < 0 )
  {
    v3 = sub_101FA20(a2, (unsigned int)(-2 - a3), v8);
    if ( v8[0] )
      goto LABEL_9;
  }
  else
  {
    v3 = *(_QWORD *)(a2 + 184) + 24LL * (unsigned int)a3;
  }
  if ( v3 )
  {
    if ( *(char *)(v3 + 3) >= 0 )
    {
      v4 = (_QWORD *)(*(_QWORD *)(v3 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v4[1] )
      {
        v5 = v4[3];
        v6 = v4[4];
        *(_BYTE *)(a1 + 16) = 1;
        *(_QWORD *)(a1 + 8) = v6;
        *(_QWORD *)a1 = v5;
        return a1;
      }
    }
  }
LABEL_9:
  *(_BYTE *)(a1 + 16) = 0;
  return a1;
}
