__int64 __fastcall sub_21989F0(__int64 a1)
{
  int v1; // ebx
  bool (__fastcall *v2)(__int64); // rax
  int v3; // eax
  __int64 v4; // rbx
  unsigned int v6[3]; // [rsp+10h] [rbp-38h] BYREF
  int v7; // [rsp+1Ch] [rbp-2Ch]

  sub_2198930(v6, a1);
  v1 = v7;
  if ( *(_QWORD *)(a1 + 272) && v7 )
  {
    v2 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL);
    if ( v2 == sub_2195C40 )
    {
      if ( (unsigned int)(*(_DWORD *)(a1 + 8) - 19) <= 1 )
      {
LABEL_5:
        v3 = 16;
LABEL_6:
        v4 = v6[2] + v3 * v1;
        return v4 + sub_215DEC0(a1);
      }
    }
    else if ( v2(a1) )
    {
      goto LABEL_5;
    }
    v3 = 12;
    goto LABEL_6;
  }
  return 0;
}
