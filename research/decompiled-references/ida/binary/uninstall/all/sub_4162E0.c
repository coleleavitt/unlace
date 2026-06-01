__int64 __fastcall sub_4162E0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int *v7; // rbx
  unsigned int v8; // ebp
  int v9; // eax
  bool v10; // zf
  int *v11; // rbp
  int v12; // eax

  if ( a3 <= 2 )
  {
    v7 = (int *)sub_48DF10(
                  "\t    ::apply [::list {{pattern *}} {\n"
                  "\t\t::set cmds {}\n"
                  "\t\t::foreach cmd [::info commands ::tcl::mathfunc::$pattern] {\n"
                  "\t\t    ::lappend cmds [::namespace tail $cmd]\n"
                  "\t\t}\n"
                  "\t\t::foreach cmd [::info commands tcl::mathfunc::$pattern] {\n"
                  "\t\t    ::set cmd [::namespace tail $cmd]\n"
                  "\t\t    ::if {$cmd ni $cmds} {\n"
                  "\t\t\t::lappend cmds $cmd\n"
                  "\t\t    }\n"
                  "\t\t}\n"
                  "\t\t::return $cmds\n"
                  "\t    } [::namespace current]] ",
                  0xFFFFFFFF);
    if ( a3 == 2 )
    {
      v11 = (int *)sub_46EEB0(1, a4 + 8);
      sub_48F180(v7, v11);
      v12 = *v11 - 1;
      v10 = *v11 == 1;
      *v11 = v12;
      if ( v12 < 0 || v10 )
        sub_47B120(v11);
    }
    ++*v7;
    v8 = sub_40BBC0(a2, (__int64)v7, 0);
    v9 = *v7 - 1;
    v10 = *v7 == 1;
    *v7 = v9;
    if ( v9 < 0 || v10 )
      sub_47B120(v7);
    return v8;
  }
  else
  {
    sub_458930(a2, 1, a4, "?pattern?");
    return 1;
  }
}

