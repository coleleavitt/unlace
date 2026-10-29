__int64 __fastcall sub_4AEA20(__int64 a1, __int64 a2, _QWORD *a3, bool *a4)
{
  _DWORD *v6; // rax
  unsigned int v7; // ebp
  void *v8; // rbx
  __int64 v10; // r13
  int v11; // eax
  char v12; // [rsp+Fh] [rbp-49h] BYREF
  _QWORD v13[2]; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v14[7]; // [rsp+20h] [rbp-38h] BYREF

  v13[0] = 0;
  v13[1] = 0;
  v14[0] = 1;
  v14[1] = 0;
  if ( (*(_BYTE *)(a2 + 6) & 2) != 0 )
  {
    *a3 = a2;
    *a4 = 1;
LABEL_9:
    v7 = 1;
    goto LABEL_6;
  }
  if ( !*(_WORD *)(a2 + 4) )
  {
    v6 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v6 )
    {
      if ( *v6 == 5 && v6[1] == 9 && *(_DWORD *)(a2 + 24) == 2 )
      {
        v10 = *(_QWORD *)(a2 + 40);
        if ( (unsigned __int8)sub_1666AE0(a1 + 8, *(_QWORD *)(a2 + 32), v13, &v12) )
        {
          if ( (*(_BYTE *)(v10 + 6) & 2) != 0 )
          {
            v11 = v13[0];
            *a3 = v10;
            *a4 = v11 >= 0;
            goto LABEL_9;
          }
        }
      }
    }
  }
  v7 = 0;
LABEL_6:
  v8 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v13);
  sub_182CBA0(v8, v14);
  return v7;
}

