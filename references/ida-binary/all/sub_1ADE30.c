_QWORD *__fastcall sub_1ADE30(_QWORD *a1, const char *a2)
{
  __int64 idati; // r12
  void *v4; // rbp
  __int64 *v5; // r13
  __int64 v6; // rdi
  __int64 v7; // rdi
  unsigned int v8; // eax
  __int64 tlc_for_til; // [rsp+8h] [rbp-120h] BYREF
  void *v11[2]; // [rsp+10h] [rbp-118h] BYREF
  __int16 v12; // [rsp+20h] [rbp-108h]
  _BYTE v13[200]; // [rsp+30h] [rbp-F8h] BYREF
  unsigned __int64 v14; // [rsp+F8h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  idati = get_idati(a1);
  v4 = (void *)operator new(0x40u);
  sub_3A4010(v4, 1, sub_1AC9C0, idati);
  v11[0] = v4;
  tlc_for_til = create_tlc_for_til(idati, 0);
  sub_3A42C0(v13, a2, 52, 3, &tlc_for_til, v11);
  if ( tlc_for_til )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)tlc_for_til + 8LL))(tlc_for_til);
  v5 = (__int64 *)v11[0];
  if ( v11[0] )
  {
    v6 = *((_QWORD *)v11[0] + 3);
    if ( v6 )
    {
      *((_QWORD *)v11[0] + 4) = 0;
      qfree(v6, a2);
    }
    v7 = *v5;
    if ( *v5 )
    {
      v5[1] = 0;
      qfree(v7, a2);
    }
    operator delete(v5, 0x40u);
  }
  v8 = sub_3A4190(v13, dword_8BCDE0[0]);
  if ( v8 )
  {
    dword_8BCDE0[0] = v8;
    *a1 = 0;
    v12 = 257;
    v11[1] = (void *)v8;
    v11[0] = (void *)get_idati(v13);
    if ( (unsigned __int8)create_tinfo(a1, 61, 189, v11) )
      goto LABEL_11;
    clear_tinfo_t(a1);
  }
  *a1 = 0;
LABEL_11:
  til_chooser_t__::vfunc_0(v13);
  return a1;
}
