/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_53220
// Address: 0x00053220

//----- (00053220) --------------------------------------------------------
int __fastcall sub_53220(int a1, int a2, int a3)
{
  int *v4; // r7
  int v5; // r6
  int v6; // r0
  int qerrno; // r0
  unsigned int v8; // r0
  __int64 v9; // r0
  int v10; // r1
  bool v11; // cf
  _BYTE *v12; // r2
  __int64 v13; // r0
  _BYTE v16[8]; // [sp+8h] [bp-14h] BYREF
  __int64 v17; // [sp+10h] [bp-Ch]
  int v18; // [sp+18h] [bp-4h]

  v4 = (int *)(a1 + 444);
  if ( a3 )
  {
    v5 = *v4;
    v6 = sub_51A0C(a1, *v4, 0, nullptr);
    if ( !v6 && *(_DWORD *)(a1 + 32) )
      v6 = sub_52528((char **)a1, v5);
    if ( v6 )
    {
      qerrno = get_qerrno();
      longjmp((struct __jmp_buf_tag *)(a1 + 188), qerrno);
    }
  }
  v16[0] = 1;
  v17 = 0;
  v8 = *(unsigned __int16 *)(*v4 + 12);
  if ( v8 > 0x2C )
  {
    if ( v8 == 126 )
    {
      sub_53220(a1, v16, 1);
      v9 = ~v17;
      goto LABEL_16;
    }
    if ( v8 != 45 )
    {
LABEL_19:
      sub_53388(a1, a2);
      return _stack_chk_guard - v18;
    }
    sub_53220(a1, v16, 1);
    v10 = HIDWORD(v17);
    v11 = (_DWORD)v17 == 0;
    v12 = (_BYTE *)a2;
    *(_DWORD *)(a2 + 8) = -(int)v17;
    *(_DWORD *)(a2 + 12) = -(v10 + !v11);
  }
  else
  {
    if ( v8 != 33 )
    {
      if ( v8 == 43 )
      {
        sub_53220(a1, v16, 1);
        v9 = v17;
LABEL_16:
        v12 = (_BYTE *)a2;
        *(_QWORD *)(a2 + 8) = v9;
        goto LABEL_17;
      }
      goto LABEL_19;
    }
    sub_53220(a1, v16, 1);
    v13 = v17;
    v12 = (_BYTE *)a2;
    *(_DWORD *)(a2 + 12) = 0;
    *(_DWORD *)(a2 + 8) = v13 == 0;
  }
LABEL_17:
  *v12 = v16[0];
  return _stack_chk_guard - v18;
}
