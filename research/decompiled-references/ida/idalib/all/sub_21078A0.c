__int64 __fastcall sub_21078A0(__int64 a1, const void *a2, size_t a3)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rbp
  void *v6; // rax
  __int64 v7; // rdx
  __int64 result; // rax
  unsigned __int64 v9; // rdx
  const char *v10; // [rsp+0h] [rbp-48h] BYREF
  __int16 v11; // [rsp+20h] [rbp-28h]

  v3 = sub_2107740(a1, a2, a3);
  v4 = *(_QWORD *)(v3 + 8);
  v5 = v3;
  if ( !v4 )
    goto LABEL_8;
  if ( sub_21003E0(*(_QWORD *)(v3 + 8)) )
  {
    v6 = (void *)sub_21003E0(v4);
    if ( !v6 || v6 == off_2C8EF40 || v4 != *(_QWORD *)(*(_QWORD *)(sub_21003E0(v4) + 8) + 16LL) )
    {
      v10 = "invalid symbol redefinition";
      v11 = 259;
      sub_2100A30(a1, 0, (__int64)&v10);
    }
  }
  v7 = sub_21003E0(v4);
  result = v4;
  if ( v7 )
  {
LABEL_8:
    *(_BYTE *)(v5 + 20) = 1;
    result = sub_21236A0(40, v5, a1);
    v9 = *(_QWORD *)(result + 8) & 0xFFFF0000FFF00000LL;
    *(_QWORD *)(result + 24) = 0;
    LOBYTE(v9) = v9 | 0x81;
    *(_QWORD *)result = 0;
    *(_QWORD *)(result + 8) = v9;
    *(_DWORD *)(result + 16) = 0;
    *(_QWORD *)(result - 8) = v5;
    *(_WORD *)(result + 32) = 0;
    if ( !v4 )
      *(_QWORD *)(v5 + 8) = result;
  }
  return result;
}
