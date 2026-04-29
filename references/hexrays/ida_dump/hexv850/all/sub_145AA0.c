__int64 __fastcall sub_145AA0(__int64 a1, __int64 a2)
{
  int v2; // r15d
  char v3; // r14
  int v4; // r13d
  int v5; // r12d
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // rax

  v2 = a2 & 8;
  v3 = a2;
  v4 = a2 & 4;
  v5 = a2 & 2;
  v6 = 0;
  sub_62660((_QWORD *)a1);
  if ( (a2 & 2) != 0 )
    goto LABEL_10;
LABEL_2:
  if ( v4 )
  {
LABEL_7:
    v12 = sub_62660((_QWORD *)a1);
    a2 = v3 & 1;
    v6 += sub_17D3C0(v12, a2);
    if ( v2 )
    {
LABEL_4:
      while ( 1 )
      {
        v11 = sub_144660(*(__int64 **)(a1 + 784), a2, v7, v8, v9, v10);
        if ( !v11 )
          break;
        v6 += v11;
        sub_62660((_QWORD *)a1);
        if ( v5 )
        {
LABEL_10:
          while ( sub_13F770(a1, a2, v7, v8, v9, v10) )
            ++v6;
          goto LABEL_2;
        }
        if ( v4 )
          goto LABEL_7;
      }
    }
  }
  else if ( v2 )
  {
    goto LABEL_4;
  }
  return v6;
}
