__int64 __fastcall sub_9B0620(int a1, __int64 a2, __int64 a3)
{
  void *v4; // r12
  int v5; // eax
  int v6; // eax
  void *v7; // r12
  void *v8; // rbx
  void *v9; // rbx
  void *v10; // rbx
  void *v11; // rbx
  __int64 result; // rax
  _BYTE v13[16]; // [rsp+10h] [rbp-B8h] BYREF
  _BYTE v14[16]; // [rsp+20h] [rbp-A8h] BYREF
  int v15; // [rsp+30h] [rbp-98h] BYREF
  char v16; // [rsp+34h] [rbp-94h]
  int v17; // [rsp+40h] [rbp-88h] BYREF
  char v18; // [rsp+44h] [rbp-84h]
  int v19[4]; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v20[16]; // [rsp+60h] [rbp-68h] BYREF
  int v21[4]; // [rsp+70h] [rbp-58h] BYREF
  _BYTE v22[72]; // [rsp+80h] [rbp-48h] BYREF

  if ( (*(_BYTE *)(a2 + 4) & 1) != 0
    || *(_DWORD *)a2 != -1
    || (*(_BYTE *)(a2 + 20) & 1) != 0
    || *(_DWORD *)(a2 + 16) != 1 )
  {
    if ( (*(_BYTE *)(a3 + 4) & 1) != 0
      || *(_DWORD *)a3 != -1
      || (*(_BYTE *)(a3 + 20) & 1) != 0
      || *(_DWORD *)(a3 + 16) != 1
      || (result = *(unsigned int *)(a3 + 32), (_DWORD)result) )
    {
      sub_91F480((__int64)v19, a3);
      sub_3ED4D0((__int64)qword_1C7F2C0, v19, a2, (__int64)v19);
      sub_3ED4D0((__int64)qword_1C7F2C0, v21, a2, (__int64)v21);
      sub_9A9130((__int64)v13, (__int64)v19);
      sub_3EBE30((__int64)&v15, (__int64)v13, a2);
      v4 = qword_1C7F2C0;
      if ( (v16 & 1) != 0 )
      {
        sub_182C690(qword_1C7F2C0, a3, &v15);
      }
      else
      {
        v5 = v15;
        *(_BYTE *)(a3 + 4) &= ~1u;
        *(_DWORD *)a3 = v5;
      }
      if ( (v18 & 1) != 0 )
      {
        sub_182C690(v4, a3 + 16, &v17);
      }
      else
      {
        v6 = v17;
        *(_BYTE *)(a3 + 20) &= ~1u;
        *(_DWORD *)(a3 + 16) = v6;
      }
      v7 = qword_1C7F2C0;
      sub_182CEF0(qword_1C7F2C0, a3 + 32);
      sub_182CBA0(v7, a3 + 48);
      *(_BYTE *)(a3 + 52) &= ~1u;
      *(_DWORD *)(a3 + 48) = 1;
      v8 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v15);
      sub_182CBA0(v8, &v17);
      v9 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v13);
      sub_182CBA0(v9, v14);
      v10 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v21);
      sub_182CBA0(v10, v22);
      v11 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v19);
      return sub_182CBA0(v11, v20);
    }
  }
  return result;
}

