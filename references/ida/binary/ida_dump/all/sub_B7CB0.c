__int64 __fastcall sub_B7CB0(__int64 a1, _DWORD *a2, __int64 a3)
{
  unsigned int v5; // ebx
  __int64 v7; // r14
  int v8; // eax
  _BYTE *v9; // rdi
  unsigned int v10; // r15d
  unsigned __int64 v11; // rax
  int v12; // eax
  unsigned __int64 v13[9]; // [rsp+0h] [rbp-48h] BYREF

  v13[1] = __readfsqword(0x28u);
  v5 = sub_12A970(a3, a1, a2);
  if ( !(_BYTE)v5 && *(_BYTE *)(a3 + 64) == 8 )
  {
    v7 = *(_QWORD *)(a3 + 72);
    v8 = *(_DWORD *)(v7 + 284);
    if ( v8 == 5 || v8 == 34 )
    {
      v9 = *(_BYTE **)(v7 + 24);
      if ( *v9 == 10 && v9[80] == 10 )
      {
        v10 = sub_11FD80(v9 + 160, v13, 0);
        if ( (_BYTE)v10 )
        {
          if ( LODWORD(v13[0]) )
          {
            v11 = sub_32FB00(*(_QWORD *)(a1 + 96), *(unsigned int *)(*(_QWORD *)(a3 + 72) + 284LL));
            if ( v11 != -1 )
            {
              if ( v11 <= 1 )
                goto LABEL_14;
              if ( !v13[0] )
              {
LABEL_15:
                *a2 = 4;
                v5 = v10;
                sub_125180(a2 + 8);
                sub_125180(a2 + 16);
                v12 = v13[0];
                a2[9] = v13[0];
                a2[17] = v12;
                return v5;
              }
              if ( is_mul_ok(v13[0], v11) )
              {
LABEL_14:
                v13[0] *= v11;
                if ( v13[0] <= 0x7FFFFFFF )
                  goto LABEL_15;
              }
            }
          }
        }
      }
    }
  }
  return v5;
}
