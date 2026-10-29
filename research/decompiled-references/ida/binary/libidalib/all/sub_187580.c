char *__fastcall sub_187580(TGroup *this, __int64 a2, __int64 a3)
{
  _QWORD *v4; // r14
  char *v5; // rbx
  __int64 v6; // rdx
  char **v7; // rax
  __int64 v8; // rdx
  char **v9; // rcx
  int v11; // [rsp+Ch] [rbp-5Ch] BYREF
  _DWORD v12[6]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  v4 = sub_187320((__int64)this, a2, &v11, 82, v12);
  v5 = (char *)operator new(0x58u);
  TCluster::TCluster(v5, v12, v4);
  *(_QWORD *)v5 = &off_23CF28;
  if ( !TFileList::getKey((TFileList *)TProgram::application, v5) )
    return nullptr;
  v6 = *(_QWORD *)(a2 + 8);
  v7 = (char **)(*((_QWORD *)this + 25) + 72LL * *((_QWORD *)this + 26));
  if ( (int)v6 > 0 )
  {
    v8 = -9 * ((unsigned int)(v6 - 1) + 1LL);
    v9 = &v7[v8];
    if ( (-(int)(v8 * 8) & 8) == 0 || (v7 -= 9, *v7 = v5, v7 != v9) )
    {
      do
      {
        *(v7 - 9) = v5;
        v7 -= 18;
        *v7 = v5;
      }
      while ( v7 != v9 );
    }
  }
  (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v5 + 104LL))(v5, a3);
  TGroup::insert(this, (TView *)v5);
  return v5;
}

