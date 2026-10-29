/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000134B0
// Address: 0x00000001000134B0

//----- (00000001000134B0) ----------------------------------------------------
char *__fastcall sub_1000134B0(_QWORD *a1, __int64 a2, int a3)
{
  int v3; // eax
  _QWORD *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rbx
  unsigned __int64 v10; // r12
  off_t v11; // r15
  __int64 v12; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // r13
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // [rsp-4h] [rbp-30h]

  LODWORD(v18) = v3;
  v6 = (_QWORD *)a1[64];
  if ( v6 )
  {
    v7 = sub_1000135D0(v6, *(unsigned int *)(a2 + 16), a1 + 28, nullptr);
    if ( !v7 )
      return nullptr;
    v8 = v7;
    HIDWORD(v18) = a3;
    v9 = *(unsigned int *)(a2 + 16);
    LODWORD(v10) = *(_DWORD *)(a2 + 20);
    v11 = v9;
  }
  else
  {
    HIDWORD(v18) = a3;
    v8 = a1[6];
    v12 = sub_100012870((__int64)a1, *(_DWORD *)(a2 + 16));
    LODWORD(v10) = *(_DWORD *)(a2 + 20);
    if ( v12 == -1 )
    {
      v11 = qlseek(v8, 0, 1);
      v9 = -1;
    }
    else
    {
      v9 = v12;
      v11 = v12;
    }
  }
  v10 = (unsigned int)v10;
  v14 = qlsize(v8);
  v15 = 0;
  if ( v11 < 0 || (v16 = v14 - v11, v16 < 0) || (v15 = v16, v16 < (unsigned __int64)(unsigned int)v10) )
  {
    v17 = sub_10001D6D0(
            1,
            (int)"AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s",
            "strings table",
            (unsigned int)v10,
            v15,
            ". Do you want to continue with the new value?",
            v18);
    v10 = v15;
    if ( v17 != 1 )
      sub_10001D7A0(0);
  }
  return sub_1000133A0(v8, v9, v10, BYTE4(v18));
}
// 1000134BD: variable 'v3' is possibly undefined
// 10001359F: variable 'v18' is possibly undefined
