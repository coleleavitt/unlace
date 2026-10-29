void __fastcall sub_215AA20(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 a4, _QWORD **a5)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD *v22; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+18h] [rbp-B0h]
  char v24; // [rsp+20h] [rbp-A8h]
  _QWORD *v25[2]; // [rsp+30h] [rbp-98h] BYREF
  char *v26; // [rsp+40h] [rbp-88h]
  __int64 v27; // [rsp+48h] [rbp-80h]
  __int64 v28; // [rsp+50h] [rbp-78h]
  _QWORD v29[2]; // [rsp+60h] [rbp-68h] BYREF
  char *v30; // [rsp+70h] [rbp-58h]
  __int64 v31; // [rsp+80h] [rbp-48h]

  a1[1] = a2;
  a1[2] = a3;
  *a1 = off_2C73820;
  if ( a3 )
  {
    v8 = sub_215DEC0(a2);
    if ( v12 + v8 <= (unsigned __int64)(a3 + 114) )
    {
      if ( a5 )
      {
        LOWORD(v31) = 259;
        v29[0] = "malformed AIX big archive: remaining buffer is unable to contain next archive member";
        sub_2158040(
          v25,
          a2,
          a3 + 114,
          v9,
          v10,
          v11,
          (char)"malformed AIX big archive: remaining buffer is unable to contain next archive member");
        *a5 = v25[0];
      }
    }
    else if ( a4 <= 0x71 )
    {
      sub_215A570((__int64)&v22, (__int64)a1);
      if ( (v24 & 1) != 0 )
      {
        v15 = v22;
        v22 = nullptr;
        v25[0] = v15;
        sub_A05760(v29, v25);
        if ( v25[0] )
          (*(void (__fastcall **)(_QWORD *))(*v25[0] + 8LL))(v25[0]);
        v16 = sub_215DEC0(a1[1]);
        v29[0] = v25;
        v25[1] = (_QWORD *)(&dword_40 + 3);
        LOWORD(v28) = 773;
        v25[0] = "remaining size of archive too small for next archive member header ";
        v21 = a3 - v16;
        v26 = "at offset ";
        v30 = (char *)&v21;
        LOWORD(v31) = 2818;
        sub_2158040(&v20, (__int64)v25, 2818, v17, v18, v19, (char)v25);
      }
      else
      {
        v29[0] = "remaining size of archive too small for next archive member header ";
        v26 = (char *)v22;
        v30 = "for ";
        LOWORD(v31) = 773;
        v29[1] = 67;
        v25[0] = v29;
        v27 = v23;
        LOWORD(v28) = 1282;
        sub_2158040(&v20, 1282, v23, 773, v13, v14, (char)v29);
      }
      sub_111DFC0((__int64 *)&v22);
      if ( a5 )
      {
        *a5 = v20;
      }
      else if ( v20 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v20 + 8LL))(v20);
      }
    }
  }
}
