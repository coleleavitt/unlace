__int64 __fastcall sub_A46B70(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  int v5; // eax
  int v6; // eax
  void *v7; // rdx
  char v8; // cl
  int v10; // eax
  void *v11[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v12; // [rsp+10h] [rbp-48h]
  void *v13; // [rsp+20h] [rbp-38h] BYREF
  void *v14; // [rsp+28h] [rbp-30h] BYREF
  int v15; // [rsp+30h] [rbp-28h]

  if ( a3 )
  {
    v4 = *(_QWORD *)(a3 + 40);
    v12 = 0;
    *(_OWORD *)v11 = 0;
    if ( v4 )
    {
      sub_C1ADC0(&v13, v4, *a2, 0);
      if ( (_BYTE)v15 )
      {
        v5 = (int)v14;
        LOBYTE(v12) = 1;
        LODWORD(v14) = 0;
        LODWORD(v11[1]) = v5;
        v11[0] = v13;
        BYTE4(v11[1]) = BYTE4(v14);
        sub_96A770((__int64)&v13);
        v6 = (int)v11[1];
        LOBYTE(v13) = 1;
        v15 = (int)v11[1];
        if ( LODWORD(v11[1]) > 0x40 )
        {
          sub_21E17D0(&v14);
          v8 = (char)v13;
          v6 = v15;
          v7 = v14;
        }
        else
        {
          v7 = v11[0];
          v8 = 1;
        }
        *(_BYTE *)a1 = v8;
        *(_DWORD *)(a1 + 16) = v6;
        *(_QWORD *)(a1 + 8) = v7;
        goto LABEL_9;
      }
      sub_96A770((__int64)&v13);
    }
    *(_BYTE *)a1 = 0;
    *(_DWORD *)(a1 + 16) = 1;
    *(_QWORD *)(a1 + 8) = 0;
LABEL_9:
    sub_96A770((__int64)v11);
    return a1;
  }
  if ( a4 )
  {
    sub_A39D90((__int64)&v13, a4);
    v10 = (int)v14;
    *(_BYTE *)a1 = 1;
    *(_DWORD *)(a1 + 16) = v10;
    *(_QWORD *)(a1 + 8) = v13;
  }
  else
  {
    *(_BYTE *)a1 = 0;
    *(_DWORD *)(a1 + 16) = 1;
    *(_QWORD *)(a1 + 8) = 0;
  }
  return a1;
}

